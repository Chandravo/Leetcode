//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<int> replaceElements(vector<int>& arr) {
   
    int haw=-1;
    for(int i=arr.size()-1;i>=0;i--){
        int tmp=haw;
        haw=max(haw,arr[i]);
        arr[i]=tmp;
    }
    return arr;   
}
int main(){
    
}