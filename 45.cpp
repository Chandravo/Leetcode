//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) {
	if (nums.size()==1){
		return 0;
	}
	int x=nums.size()-1;
	int jumps=0;
	int i=x;

	while (x!=0){
		// int f=0;
		i=x;
		// cout<<i<<endl;
		while (true){
			if (i+nums[i]>=x){
				break;
			}
			i++;
		}

		x=i;
		jumps++;

	}  
	return jumps;  
}
int jump(vector<int>& nums) {
	int jumps=0;
	int l=0,r=0;
	while (r<nums.size()-1){
		int f=0;
		for (int i=l;i<=r;i++){
			f=max(f,i+nums[i]);
		}
		l=r+1;
		r=f;
		jumps++;
	}
	return jumps;  
}

int main(){
	vector<int> a{2,3,0,1,4};
	jump(a);
}