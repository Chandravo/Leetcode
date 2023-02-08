//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void helper(vector<int> &c,int start,vector<int> &temp,int target){
    if (target==0){
        ans.push_back(temp);
        return ;
    }
    if (start==c.size()) return ;
    if (target<0) return;

    helper(c,start+1,temp,target);

    temp.push_back(c[start]);
    helper(c,start+1,temp,target-c[start]);
    temp.pop_back();

}

vector<vector<int>> combinationSum(vector<int>& c, int target) {
    vector<int> temp;
    helper(c,0,temp,target);
    return ans;
}

int main(){
    
}