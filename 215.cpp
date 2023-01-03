//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// using quixkselect;
int quickSelect(vector<int>& nums, int l, int r, int k){
    int n=nums.size();
    int pivot=nums[r];
    int j=l;
    int tmp;
    for(int i=l;i<r;i++){
        if (nums[i]>=pivot){
            tmp=nums[i];
            nums[i]=nums[j];
            nums[j]=tmp;
            j++;
        }
    }
    tmp=nums[r];
    nums[r]=nums[j];
    nums[j]=tmp;
   
    if (j>k){
        return quickSelect(nums,l,j-1,k);
    }
    else if (j<k){
        return quickSelect(nums,j+1,r,k);
    }
    else{
        return nums[j];
    }

}
int findKthLargest(vector<int>& nums, int k) {
    return quickSelect(nums,0,nums.size()-1,k-1);
}

// using heap

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int,vector<int>,greater<int>> minh;
    for (int i:nums){
        minh.push(i);
        if (minh.size()>k){
            minh.pop();
        }

    }   
    return minh.top();     
}

int main(){
    vector<int> nums{7,9,6,2,1,4,3,5};
    cout<<findKthLargest(nums,3);
}