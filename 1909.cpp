//rempve one element to make the array strictly increasing
//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
bool canBeIncreasing(vector<int>& nums) {
    int cnt=0;
    // cout<<"size = "<<nums.size()<<endl;
    for(int i=0;i<nums.size()-1;i++){
        // cout<<i<<"lmao"<<endl;
        // cout<<nums[i]<<" "<<nums[i+1]<<endl;
        if (nums[i]>=nums[i+1]){
            nums.erase(nums.begin()+i);
            if (++cnt>1){
                cout<<cnt<<"lol ";
                return false;
            }
            i=i-1;
        }
        
    }  
    return true;      
}
int main(){
    vector<int> nums{2,3,1,2};
    cout<<endl<<canBeIncreasing(nums);
}