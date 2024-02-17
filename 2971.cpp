//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

long long largestPerimeter(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    long long s = accumulate(nums.begin(), nums.end(), 0LL);
    int i=nums.size()-1;
    while (nums[i] >= s-nums[i]){
        s -= nums[i];
        i--;
    }
    return s;
    
}

int main(){
    
}