//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class SubrectangleQueries {
    vector<vector<int>> rec;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rec=rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for (int i=row1;i<=row2;i++){
            for (int j=col1;j<=col2;j++){
                rec[i][j]=newValue;
            }
        }
    }
    
    int getValue(int row, int col) {
        return rec[row][col];
    }
};

int main(){
    
}