//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
	int l=0,r=nums.size()-1;
	vector<int> res(nums.size());
	for (int i=nums.size()-1;i>=0;i--){
		if (abs(nums[l])>abs(nums[r])){
			res[i]=nums[l]*nums[l++];
		}
		else{
			res[i]=nums[r]*nums[r--];
		}
	}
	return res;
	    
}

int main(){
	vector<int> a{1,2,3};
	for (int i:sortedSquares(a)){
		cout<<i;
	}
}