//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int i=0,j=arr.size()-1;
    while (i<=j){
        if (i==j) return i;
        int mid = i+(j-i)/2;
        if (mid==0){
            if (arr[mid]>arr[mid+1]) return mid;
            else i=mid+1;
        }
        else if (mid ==arr.size()-1){
            if (arr[mid]>arr[mid-1]) return mid;
            else j=mid-1;
        }
        else if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
        else if (arr[mid]>arr[mid-1]) i=mid+1;
        else j=mid-1;
    }        
    return -1;
}

int main(){
    
}