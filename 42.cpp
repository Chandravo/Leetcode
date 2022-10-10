//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int res=0;
    int i=0;
    int j=height.size()-1;
    int maxl=height[i];
    int maxr=height[j];

    while (i<j){
        if (maxl<=maxr){
            i++;
            maxl=max(height[i],maxl);
            res+=maxl-height[i];
        }
        else{
            j--;
            maxr=max(height[j],maxr);
            res+=maxr-height[j];
        }
    }        
    return res;
}

int main(){
    
}