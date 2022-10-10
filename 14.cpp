//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
	string res=strs[0];
	for (int i=1;i<strs.size();i++){
		if (res.size()>strs[i].size()){
			res.erase(strs[i].size());
		}
		for (int j=0;j<strs[i].size();j++){
			if (res[j]!=strs[i][j]){
				res.erase(j);
				break;
			}
		}
		if (res.size()==0){
			break;
		}
	}
	return res;
}
int main(){
	vector<string> a{"ab","a"};
	
	cout<<longestCommonPrefix(a);
}