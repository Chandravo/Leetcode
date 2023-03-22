//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// int total=0;

bool helper (vector<int> &mtch, vector<int> &sides, int ind, int &total){
    if (ind==mtch.size()) return true;
    
    for (int i=0;i<4;i++){
        if (sides[i]+mtch[ind]<=total){
            sides[i]+=mtch[ind];
            if (helper(mtch,sides,ind+1,total)) return true;
            sides[i]-=mtch[ind];
        }
    }
    return false;
}

bool makesquare(vector<int>& mtch) {
    int total=accumulate(mtch.begin(),mtch.end(),0);
    // cout<<total<<endl;
    if (total%4!=0) return false;
    sort(mtch.begin(),mtch.end(),greater<int>());
    total=total/4;
    vector<int> sides(4,0); 
    return helper(mtch,sides,0,total);
    
}

int main(){
    vector<int> nums{5,5,5,5,4,4,4,4,3,3,3,3};
    cout<<endl<<makesquare(nums)<<endl;
}