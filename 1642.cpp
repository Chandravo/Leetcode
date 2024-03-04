//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int furthestBuilding(vector<int>& nums, int bricks, int n) {
    priority_queue<int, vector<int>, greater<int>> pq;
    int curr = bricks;
    int i=0;
    for (i=1;i<nums.size(); i++){
        if (nums[i]<=nums[i-1]) continue;
        pq.push(nums[i]-nums[i-1]);
        if (pq.size()>n) {
            curr-= pq.top();
            pq.pop();
        }
        if (curr<0) break;
    }
    return i-1;
}

int main(){
    
}