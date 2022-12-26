//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool sol(){
	int n;cin>>n;
	vector<int> a(n);
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int stems=1;
	for (int i:a){
		if (i>stems){
			return false;
		}
		stems=stems-i;
		stems=stems*2;
	}
	return true;
}

int main(){
	int t;cin>>t;
	while (t--){	
		if (sol()){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}

	}	
}