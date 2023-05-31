//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxTurbulenceSize(vector<int>& arr) {
    int n=arr.size();
    int res=0, curr=1;
    short int comp=0;
    for (int i=1;i<n;i++){
        if (arr[i]<arr[i-1]){
            if (comp=-1) curr=1;
            else curr++,comp=-1;
        }
        else if (arr[i]>arr[i-1]){
            if (comp==1) curr=1;
            else curr++,comp=1;
        }
        else{
            comp=0;
            curr=1;
        }
        res=max(res,curr);
    }
    return res;
}

int main(){
    
}