//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int arrangeCoins(int n) {
    n=(long long int)n;
    long long int x=n*(long long int)8+1;
	return (pow(x,0.5)-1)/2;    
}

int main(){
	cout<<arrangeCoins(7);
}