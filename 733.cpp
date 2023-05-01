//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

void helper(vector<vector<int>>& image, int i, int j, int &ic, int &fc){
    if (i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]!=ic) return;
    image[i][j]=fc; 
    helper(image,i+1,j,ic,fc); 
    helper(image,i-1,j,ic,fc); 
    helper(image,i,j+1,ic,fc); 
    helper(image,i,j-1,ic,fc); 
    
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    if (image[sr][sc]==color) return image;
    int ic=image[sr][sc];
    helper(image,sr,sc,ic,color);
    return image;
}

int main(){
    vector<vector<int>> image{{1,1,1},{1,1,0},{1,0,1}};
    floodFill(image,1,1,2);
}