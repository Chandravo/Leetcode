//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    long long x=0;
    for (int i=0;i<nums.size();i++){
        x=x^nums[i];
    }     
    // cout<<"x = "<<x<<endl;
    // cout<<"3^5 = "<<(3^5)<<endl;
    long long tmp=x;
    // cout<<"tmp = "<<tmp<<endl;
    int pos=0;
    while ((tmp&1)==0){
        pos++;
        tmp=tmp>>1;
    }
    // cout<<"pos = "<<pos<<endl;
    long long mask=(1<<pos);
    int a=0,b=0;
    for (int i=0;i<nums.size();i++){
        if ((nums[i]&mask)>0) a=a^nums[i];
    }
    b=x^a;
    return {a,b};
}

int main(){
    vector<int> nums{1,2,1,3,2,5};
    vector<int> res=singleNumber(nums);
    for (int i:res) cout<<i<<" ";
    cout<<endl;
}