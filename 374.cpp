//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#define NUM 1

using namespace std;

int guess(int num){
	if (num>NUM){
		return 1;
	}
	else if (num<NUM){
		return -1;
	}
	return 0;
}

int guessNumber(int n) {
	int l=1,r=n;
	while (l<=r){
		int mid=l+(r-l)/2;
		if (guess(mid)==0){
			return mid;
		}
		else if(guess(mid)==1){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	return -1;
}

int main(){
	cout<<guessNumber(2);
}