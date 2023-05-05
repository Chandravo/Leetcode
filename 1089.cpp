//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

void duplicateZeros(vector<int>& arr) {
    int z=count(arr.begin(),arr.end(),0);
    for (int i=arr.size()-1;i>=0;i--){
        if (!arr[i]) z--;
        if ((i+z)<arr.size()) {
            arr[i+z]=arr[i];
            if (!arr[i] && (i+z+1)<arr.size()) arr[i+z+1]=0;
        }
    }  
    // return arr;      
}

int main(){
    
}