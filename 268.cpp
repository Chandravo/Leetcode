//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int sumx=(nums.size()*(nums.size()+1))/2;   
    for (int i:nums){
        sumx-=i;
    }      
    return sumx;
}
int main(){
    
}