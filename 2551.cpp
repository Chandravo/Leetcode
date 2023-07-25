//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

long long putMarbles(vector<int>& w, int k) {
    priority_queue<int> maxh,minh;
    long long mxs=0,mns=0;
    for (int i=1;i<w.size();i++){
        int curr = w[i]+w[i-1];
        maxh.push(curr);mxs+=curr;
        minh.push(-curr);mns+=curr;
        if (maxh.size()>k-1){
            mxs-=maxh.top();
            maxh.pop();
        }
        if (minh.size()>k-1){
            mns+=minh.top();
            minh.pop();
        }
    }
    return mns-mxs;

}

int main(){
    
}