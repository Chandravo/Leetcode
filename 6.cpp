//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
	if (numRows==1){
		return s;
	}
	vector<string> r(numRows,"");
	for (int i=0;i<s.length();i++){
		int x = i%(2*numRows-2);
		if (x<numRows){
			r[x].push_back(s[i]);
		}
		else{
			r[2*numRows-2-x].push_back(s[i]);
		}

	}   
	string res="";
	for (string i:r){
		res+=i;
	}     
	return res;
}

int main(){
	cout<<convert("PAYPALISHIRING",4)<<endl;
}