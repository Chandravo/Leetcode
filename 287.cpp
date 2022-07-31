//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
    int slow=0;
    int fast=0;
    
    while (true){
        slow=nums[slow];
        fast=nums[nums[fast]];
        if (slow==fast){
            break;
        }
    }
    int slow2=0;
    while (true){
        slow=nums[slow];
        slow2=nums[slow2];
        if (slow==slow2){
            return slow;
        }

    }

    


}
int main(){
    vector<int> nums{3,1,3,4,2};
    cout<<findDuplicate(nums);
}