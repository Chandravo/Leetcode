//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int removeCoveredIntervals(vector<vector<int>>& intervals) {
	sort(intervals.begin(),intervals.end());
	int res=0;
	int l=intervals[0][0],r=intervals[0][1];
	for (int i=;i<intervals.size()-1;i++){
		if (intervals[i][0]>l || intervals[i][1]> )
	}    
}

int main(){
	
}