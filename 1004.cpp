//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int i=0,j=0,res=0;
    while (j<nums.size()){
        if (nums[j]==0){
            k--;
            if (k==-1){
                while (i<nums.size() && nums[i]==1) i++;
                i++;
                k++;
            }
        }
        res=max(res,j-i+1);
        j++;
    }    
    return res;

}

int main(){
    
}