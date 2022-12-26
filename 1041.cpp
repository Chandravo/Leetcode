//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool isRobotBounded(string instructions) {
	int dx=0,dy=1;
	int x=0,y=0;
	for (char i:instructions){
		if (i=='G'){
			x+=dx;
			y+=dy;
		}
		else if (i=='L'){
			swap(dx,dy);
			dx*=-1;
		}
		else{
			swap(dx,dy);
			dy*=-1;
		}
	}
	if ((x==0 && y==0) || !(dx==0 && dy==1)){
		return true;
	}
	return false;
}

int main(){
	cout<<isRobotBounded("GGL");
}