//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// space complexity : O(m+n)
// void setZeroes(vector<vector<int>>& matrix) {
// 	unordered_set<int> r;
// 	unordered_set<int> c;
// 	for (int i=0;i<matrix.size();i++){
// 		for (int j=0;j<matrix[i].size();j++){
// 			if (matrix[i][j]==0){
// 				r.insert(i);
// 				c.insert(j);
// 			}
// 		}
// 	}        
// 	for (int i=0;i<matrix.size();i++){
// 		if (r.find(i)!=r.end()){
// 			for (int j=0;j<matrix[i].size();j++){
// 				matrix[i][j]=0;
// 			}
// 		}
// 		else{
// 			for (int j=0;j<matrix[i].size();j++){
// 				if (c.find(j)!=c.end()){
// 					matrix[i][j]=0;
// 				}
// 			}
// 		}
// 	}
// }

// space complexity : O(1)
void setZeroes(vector<vector<int>>& matrix) {
	bool fr=false;
	bool fc=false;
	for (int i=0;i<matrix[0].size();i++){
		if (matrix[0][i]==0){
			fr=true;
			break;
		}
	}        
	for (int i=0;i<matrix.size();i++){
		if (matrix[i][0]==0){
			fc=true;
			break;
		}
	}
	for (int i=1;i<matrix.size();i++){
		for (int j=1;j<matrix[0].size();j++){
			if (matrix[i][j]==0){
				matrix[i][0]=0;
				matrix[0][j]=0;

			}
		}
	}


	for (int i=1;i<matrix.size();i++){
		for (int j=1;j<matrix[0].size();j++){
			if (matrix[i][0]==0 || matrix[0][j]==0){
				matrix[i][j]=0;
			}
		}
	}
	if (fr==true){
		for (int i=0;i<matrix[0].size();i++){
			matrix[0][i]=0;
		}
	}
	if (fc==true){
		for (int i=0;i<matrix.size();i++){
			matrix[i][0]=0;
		}
	}
}

int main(){
	vector<vector<int>> m={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
	setZeroes(m);
	for (int i=0;i<m.size();i++){
		for (int j=0;j<m[i].size();j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}	
}