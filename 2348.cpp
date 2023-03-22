//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

long long zeroFilledSubarray(vector<int>& nums) {
    long long res=0;
    int i=0;
    while (i<nums.size()){
        long long int cnt=0;
        while (i<nums.size() && nums[i]==0) {
            cnt++;
            i++;
        }
        if (cnt%2==0){
            res+=(cnt/2)*(cnt+1);
        }
        else{
            res+=cnt*((cnt+1)/2);
        }
        i++;
    }
    return res;
}

int main(){
    
}