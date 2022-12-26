//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

void jump(vector<int>& nums) {
	if (nums.size()==1){
		cout<<0;
	}
	int x=nums.size()-1;
	int jumps=0;
	int i=x;

	while (i!=0){
		int f=0;
		cout<<i<<endl;
		while (i!=0){
			if (i+nums[i]>=x){
				f=i;
			}
		}

		x=f;
		jumps++;

	}  
	cout<<"jumps = "<<jumps;  
}

int main(){
	vector<int> a{2,3,0,1,4};
	jump(a);
}