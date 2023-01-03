//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class KthLargest {
    priority_queue<int,vector<int>,greater<int>> minh;
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for (int i:nums){
            add(i);
        }
    }
    
    int add(int val) {
        minh.push(val);
        if (minh.size()>k){
            minh.pop();
        }
        return minh.top();
    }
};


int main(){
    
}