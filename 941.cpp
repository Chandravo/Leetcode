//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int>& arr) {
    if (arr.size()<3) return false;
    int i=1;
    while (i<arr.size() && arr[i]>arr[i-1]) i++;
    if (i==arr.size() || i==1) return false;
    i++;
    while (i<arr.size() && arr[i]<arr[i-1]) i++;
    if (i!=arr.size()) return false;
    return true;         
}

int main(){
    
}