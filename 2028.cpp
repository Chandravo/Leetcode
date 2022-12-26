//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
	int s=accumulate(rolls.begin(),rolls.end(),0);
	int diff=(mean*(rolls.size()+n)-s);
	cout<<"diff = "<<diff<<endl;
	if ((diff/n)<=0 || diff>n*6){
		return {};
	}
	vector<int> res(n,diff/n);
	for (int i=0;i<diff%n;i++){
		res[i]++;
	}
	return res;
	
}

int main(){
	vector<int> r{4,5,6,2,3,6,5,4,6,4,5,1,6,3,1,4,5,5,3,2,3,5,3,2,1,5,4,3,5,1,5};
	for (int i:missingRolls(r,4,40)){
		cout<<i<<endl;
	}
}