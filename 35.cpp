//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
	int i=0,j=nums.size()-1;
	if (nums[0]>=target){
		return 0;
	}
	if (nums[nums.size()-1]<target){
		return nums.size();
	}
	while (i<=j){
		int mid=i+(j-i)/2;
		if (nums[mid]>=target && (nums[mid-1]<target)){
			return mid;
		}
		else if (nums[mid]<target){
			i=mid+1;
		}
		else{
			j=mid-1;
		}
	}        
	return 1;
}

int main(){
	
}