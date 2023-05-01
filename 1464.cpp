//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    priority_queue<int> minh;
    for (int i:nums){
        minh.push(-i);
        if (minh.size()>2) minh.pop();
    }        
    int tmp=minh.top();
    minh.pop();
    return ((tmp*-1)-1)*((minh.top()*-1)-1);
}

int main(){
    
}