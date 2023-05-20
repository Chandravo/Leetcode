//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// int getMax(vector<int> &v){
//     int ind=v[0],mx=0;
//     for (int i=0;i<v.size();i++){
//         if (v[i]>=mx) mx=v[i],ind=i;
//     }
//     return ind;
// }

// int matrixSum(vector<vector<int>>& nums) {
//     int n = nums.size();
//     int res=0;
    
//     for (int i=0;i<nums.size();i++){
//         vector<int> mx(n);
//         for (int j=0;j<n;j++){
//             int ind = getMax(nums[j]);
//             if (ind==-1) continue;
//             mx.push_back(nums[j][ind]);
//             nums [j][ind]=-1;
//         }
//         res+=*max_element(mx.begin(),mx.end());
//     }
//     return res;
// }

int matrixSum(vector<vector<int>>& nums) {
    int m = nums.size(), n=nums[0].size();
    for (int i=0;i<m;i++){
        sort(nums[i].rbegin(),nums[i].rend());
        for (int j:nums[i])  cout<<j<<"\t";
        cout<<endl;
    }     
    cout<<endl;   
    int res=0;
    for (int j=0;j<n;j++){
        cout<<j<<" ";
        int mx=-1;
        for (int i=0;i<m;i++){
            mx=max(mx,nums[i][j]);
        }
        cout<<mx<<endl;
        if (mx!=-1) res+=mx;
    }
    return res;
}

// int matrixSum(vector<vector<int>>& nums) {
//     int n = nums.size(), m = nums[0].size();
    
//     // sort columns in descending order
//     for (int j=0;j<m;j++){
//         vector<int> col;
//         for (int i=0;i<n;i++){
//             col.push_back(nums[i][j]);
//         }
//         sort(col.rbegin(), col.rend());
//         for (int i=0;i<n;i++){
//             nums[i][j] = col[i];
//         }
//     }        
    
//     int res=0;
//     for (int j=0;j<m;j++){
//         int mx=0;
//         for (int i=0;i<n;i++){
//             if (nums[i][j] == 0) break; // element already removed
//             mx=max(mx,nums[i][j]);
//             nums[i][j] = 0; // mark element as removed
//         }
//         res+=mx;
//     }
//     return res;}

int main(){
    vector<vector<int>> n{{1,8,16,15,12,9,15,11,18,6,16,4,9,4},{3,19,8,17,19,4,9,3,2,10,15,17,3,11},{13,10,19,20,6,17,15,14,16,8,1,17,0,2},{12,20,0,19,15,10,7,10,2,6,18,7,7,4},{17,14,2,2,10,16,15,3,9,17,9,3,17,1},{17,6,19,17,18,9,14,2,19,12,10,18,7,9},{5,6,5,1,19,8,15,2,2,4,4,1,2,17},{12,16,8,16,7,6,18,13,18,8,14,15,20,11},{2,10,19,3,15,18,20,10,6,7,0,8,3,7},{11,5,10,13,1,3,4,7,1,18,20,17,19,2},{0,3,20,6,19,18,3,12,2,11,3,1,19,0},{6,5,3,15,6,1,0,17,13,19,3,8,2,7},{2,20,9,11,13,5,1,16,14,1,19,3,12,6}};
    cout<<matrixSum(n)<<endl;
}