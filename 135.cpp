//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int candy(vector<int>& ratings) {
        int n=ratings.size();
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=1;
        }
        for(auto i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                arr[i]=arr[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                arr[i]=max(arr[i],arr[i+1]+1);
            }
        }
        return accumulate(arr,arr+n,0);
    }
int main(){
    vector<int> n{1,2,2};
    cout<<candy(n);
}
