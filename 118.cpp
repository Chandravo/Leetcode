//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;
    for (int i=0;i<numRows;i++){
        vector<int> temp;
        for (int j=0;j<=i;j++){
            if (j==0 || j==i){
                
                temp.push_back(1);
            }
            else{
                
                temp.push_back(res[i-1][j-1]+res[i-1][j]);
            }
            
            
        }
        
        res.push_back(temp);
        

    } 
    return res;
}
int main(){
    int n=6;
    auto vec=generate(n);
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    
}