//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
    k=k%nums.size();
   int tmp;
   reverse(nums.begin(),nums.end());
   reverse(nums.begin(),nums.begin()+k);
   reverse(nums.begin()+k,nums.end());   
}
int main(){
    vector<int> nums{1,2,3,4,5,6,7};
    int k=3;
    rotate(nums,k);
    for (int i:nums){
        cout<<i<<" ";
    }

}
//1 2 3 4 5 6 7 8 9
//9 1 2 3 4 5 6 7 8
//8 9 1 2 3 4 5 6 7 

//9 8