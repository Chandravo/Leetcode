//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int l=0,r=matrix.size()-1,h=-1;
	
	if (matrix.size()==1){
		h=l;
	}
	else if (matrix[matrix.size()-1][0]<=target){
		if (matrix[matrix.size()-1][0]==target){
			// cout<<"a"<<endl;
			return true;
		}
		if (matrix[matrix.size()-1][matrix[0].size()-1]<target){
			// cout<<"b"<<endl;
			return false;
		}
		h=matrix.size()-1;
	}
	else if (matrix[0][0]>target){
		// cout<<"c"<<endl;
		return false;
	}
	else{
		while (l<=r){
			// cout<<"hee"<<endl;
			int mid=l+(r-l)/2;
			if ((matrix[mid][0]<=target && matrix[mid+1][0]>target) || (matrix[mid][0]>target && matrix[mid-1][0]<=target)){
				// cout<<"lmao"<<endl;
				if (matrix[mid][0]==target || (mid!=0 && matrix[mid-1][0]==target)){
					// cout<<"hehe"<<endl;
					return true;
				}
				else{
					// cout<<"hi"<<endl;
					h=(matrix[mid][0]>target)? mid-1:mid;
					break;
				}
			} 
			else if (matrix[mid][0]<target){
				// cout<<"bruh"<<endl;
				l=mid+1;
				if (mid==matrix.size()){
					h=matrix.size();
					break;
				}
			}
			else if (matrix[mid][0]>target){
				// cout<<"hola"<<endl;
				r=mid-1;
			}
			cout<<l<<" "<<r<<" "<<h<<" "<<mid<<endl;
		}

		

	}

	// cout<<"h = "<<h<<endl;
	l=0;r=matrix[0].size()-1;
	while (l<=r){
		int mid=l+(r-l)/2;
		if (matrix[h][mid]<target){
			l=mid+1;
		}
		else if (matrix[h][mid]>target){
			r=mid-1;
		}
		else{
			return true;
		}
    } 
	  
	return false;     
}

int main(){
	vector<vector<int>> matrix{{1,3,5,7},{10,11,16,20},{23,30,34,50}};
	int target=30;
	cout<<searchMatrix(matrix,target);
	
}