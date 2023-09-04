//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

long long maxSum(vector<int>& nums, int m, int k) {
    int n = nums.size();
    long long sum = 0;
    unordered_map<int,int> f;
    long long curr = 0;
    int i=0,j=0,unq=0;
    for (int l=0;l<k;l++){
        curr+=nums[l];
        if (f[nums[l]]==0) unq++;
        f[nums[l]]++; 
    }
    j=k-1;
    cout<<"before unq = "<<unq<<" curr = "<<curr<<endl;
    if (j-i+1==k && unq>=m) {
        cout<<i<<" "<<j<<endl;
        for (int l=i;l<=j;l++){
            cout<<nums[l]<<" ";
        }
        cout<<endl<<"unq = "<<unq<<endl;
        sum=max(sum,curr);
        j++;
    }
    j=k;
    // if (j<n) curr+=nums[k];
    while (j<n){
        // if (j-i+1==k && unq>=m) {
        //     cout<<i<<" "<<j<<endl;
        //     for (int l=i;l<=j;l++){
        //         cout<<nums[l]<<" ";
        //     }
        //     cout<<endl<<"unq = "<<unq<<endl;
        //     cout<<"curr = "<<curr<<endl;
        //     sum=max(sum,curr);
        //     j++;
        // }
         if (j-i+1>k){
            cout<<"i = "<<i<<endl;
            curr-=nums[i];
            f[nums[i]]--;
            if (f[nums[i]]==0) unq--;
            // else if (f[nums[i]]==1) unq++;
            i++;
            // continue;
        }
        if (f[nums[j]]==0){
            f[nums[j]]++;
            curr+=nums[j];
            // j++;
            // if (j-i+1==k && unq) break;
            unq++;
            cout<<"bruh j = "<<j<<endl;
        }
        else if (f[nums[j]]!=0){
            cout<<"j = "<<j<<endl;
            f[nums[j]]++;
            curr+=nums[j];
            // j++;
        }
        else{
            cout<<"lol "<<i<<" "<<j<<endl;
        }
        if (j-i+1==k && unq>=m) {
            cout<<i<<" "<<j<<endl;
            for (int l=i;l<=j;l++){
                cout<<nums[l]<<" ";
            }
            cout<<endl<<"unq = "<<unq<<endl;
            cout<<"curr = "<<curr<<endl;
            sum=max(sum,curr);
            // j++;
        }
        j++;
    }  
    return sum;
}

int main(){
    vector<int> nums{5,9,9,2,4,5,4};
    cout<<maxSum(nums,1,3)<<endl;
}