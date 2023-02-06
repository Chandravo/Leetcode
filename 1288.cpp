//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

struct comp{
	public:
	bool operator()(vector<int> a, vector<int> b){
		if (a[0]==b[0]) return a[1]>b[1];
		return a[0]<b[0];
	}
};

int removeCoveredIntervals(vector<vector<int>>& intervals) {
	sort(intervals.begin(),intervals.end(),comp());
	// for (int i=0;i<intervals.size();i++){
	// 	cout<<intervals[i][0]<<"	"<<intervals[i][1]<<endl;
	// }
	int res=1;
	int start=intervals[0][0], end=intervals[0][1];
	for (int i=1;i<intervals.size();i++){
		if (intervals[i][0]>start && intervals[i][1]>end){
			start=intervals[i][0];
			end=intervals[i][1];
			res++;
		}
	}
	return res;
	
}

int main(){
	vector<vector<int>> a{{2,7},{1,2},{1,5}};
	cout<<removeCoveredIntervals(a)<<endl;
}