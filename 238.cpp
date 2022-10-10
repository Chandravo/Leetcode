//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector<int> a(n,1);
    int pre=1;
    for (int i=0;i<n;i++){
        a[i]=pre;
        pre=pre*nums[i];
    }  
    pre=1;
    for (int i=n-1;i>=0;i--){
        a[i]=a[i]*pre;
        pre=pre*nums[i];
    }
    for(int i:a){
        cout<<i<<"  ";
    }  
    return a;    
}
int main(){
    vector<int> a{1,2,3,4};
    productExceptSelf(a);
}