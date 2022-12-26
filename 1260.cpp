//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
	int n=grid.size(),m=grid[1].size();
	vector<vector<int>> res(n,vector<int> (m));
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			int _j=(j+k)%m;
			int _i=(i+(j+k)/m)%n;
			res[_i][_j]=grid[i][j];
		}
	}  
	return res;      
}

int main(){
	
}