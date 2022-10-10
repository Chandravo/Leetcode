//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2) {
	string res(num1.size()+num2.size(),'0');
	for (int i=num1.size()-1;i>=0;i--){
		for (int j=num2.size()-1;j>=0;j--){
			int sum=(num1[i]-'0')*(num2[j]-'0')+(res[i+j+1]-'0');
			res[i+j+1]=sum%10+'0';
			res[i+j]+=sum/10;
		}
	}
	for (int i=0;i<num1.size()+num2.size();i++){
		if (res[i]!='0'){
			return res.substr(i);
		}
	}
	return "0";
}

int main(){
	string a="13";
	string b="5";
	cout<<multiply(a,b);	
}