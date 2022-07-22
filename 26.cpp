//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    for(int i=1;i<nums.size();i++){
        if (nums[i]==nums[i-1]){
            nums.erase(nums.begin()+i);
            i--;
        }
    }
    return nums.size();
}
int main(){
    vector<int> n{0,0,1,1,1,2,2,3,3,4};
    int t=removeDuplicates(n);
    cout<<t<<endl;
    for(auto i:n){
        cout<<i<<" ";
    }
}