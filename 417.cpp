//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

unordered_set<int> vis;

// void helper(vector<vector<int>> &h, int i, int j, int prev, bool &pac, bool &atl){
//     if (pac && atl) return;
//     if (i<0 || j<0 || i>=h.size() || j>=h[0].size()) return;
//     // cout<<"inside recursion, i & j :"<<i<<" "<<j<<endl;
//     // cout<<prev<<" "<<h[i][j]<<" lol"<<endl;
//     if (prev<abs(h[i][j])) return;
//     if (h[i][j]<0){
//         pac=true;
//         atl=true;
//         return;
//     }
//     if (i==0 || j==0) pac=true;
//     if (i==h.size()-1 || j==h[0].size()-1) atl=true;
//     int tmp=(h[i][j]);
//     h[i][j]=INT_MAX;
//     helper(h,i+1,j,abs(tmp),pac,atl);
//     helper(h,i-1,j,abs(tmp),pac,atl);
//     helper(h,i,j+1,abs(tmp),pac,atl);
//     helper(h,i,j-1,abs(tmp),pac,atl);
//     h[i][j]=tmp;
// }

// vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
//     vector<vector<int>> res;
//     for (int i=0;i<h.size();i++){
//         for (int j=0;j<h[0].size();j++){
//             // cout<<i<<" "<<j<<" ";
//             bool pac=false,atl=false;
//             helper(h,i,j,INT_MAX,pac,atl);
//             // cout<<"pac & atl : "<<pac<<" "<<atl<<endl;
//             // cout<<"nice";
//             if (pac && atl){
//                 // cout<<"lol"<<endl;
//                 res.push_back({i,j});
//                 h[i][j]=-h[i][j];
//             }
//             // cout<<"lmao";
//         }
//     }
//     // for (int i=0;i<h.size();i++){
//     //     for (int j=0;j<h[0].size();j++){
//     //         cout<<h[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     // for (int i=0;i<res.size();i++){
//     //     cout<<res[i][0]<<" "<<res[i][1]<<endl;
//     // }
//     return res;
// }

void helper2(vector<vector<short int>> &h, vector<vector<int>> &heights , int i,int j, int prev){
    if (i<0 || j<0 || i>=h.size() || j>=h[0].size() || h[i][j]==2 || h[i][j]==3) return;
    if (prev>heights[i][j]) return;
    h[i][j]+=2;
    helper2(h,heights,i+1,j,heights[i][j]);
    helper2(h,heights,i-1,j,heights[i][j]);
    helper2(h,heights,i,j-1,heights[i][j]);
    helper2(h,heights,i,j+1,heights[i][j]);
}

void helper1(vector<vector<short int>> &h, vector<vector<int>> &heights , int i, int j, int prev){
    if (i<0 || j<0 || i>=h.size() || j>=h[0].size() || h[i][j]==1 || h[i][j]==3) return;
    if (prev>heights[i][j]) return;
    h[i][j]+=1;
    helper1(h,heights,i+1,j,heights[i][j]);
    helper1(h,heights,i-1,j,heights[i][j]);
    helper1(h,heights,i,j-1,heights[i][j]);
    helper1(h,heights,i,j+1,heights[i][j]);
}

vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
    vector<vector<int>> res;
    vector<vector<short int>> h(heights.size(),vector<short int>(heights[0].size(),0));
    for (int i=0;i<h.size();i++){
        helper1(h,heights,i,0,INT_MIN);
        helper2(h,heights,i,h[0].size()-1,INT_MIN);
    }
    for (int i=0;i<h[0].size();i++){
        helper1(h,heights,0,i,INT_MIN);
        helper2(h,heights,h.size()-1,i,INT_MIN);
    }

    for (int i=0;i<h.size();i++){
        for (int j=0;j<h[0].size();j++){
            cout<<h[i][j]<<" ";
            if (h[i][j]==3) res.push_back({i,j});
        }
        cout<<endl;
    }
    return res;

}

int main(){
    vector<vector<int>> h{{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
    pacificAtlantic(h);
}