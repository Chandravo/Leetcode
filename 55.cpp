//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
	int x=nums.size()-1;
	for (int i=nums.size()-1;i>=0;i--){
		if (i+nums[i]>=x){
			x=i;
		}
	}        
	if (x==0){
		return true;
	}
	return false;
}

int main(){
	
}