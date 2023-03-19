//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

void print(priority_queue<int,vector<int>,greater<int>> minh){
    while (!minh.empty()){
        cout<<minh.top()<<" ";
        minh.pop();
    }
    cout<<endl;
}

int thirdMax(vector<int>& nums) {
    priority_queue<int,vector<int>,greater<int>> minh;
    unordered_set<int> s(nums.begin(),nums.end());
    for (int i:s){
        minh.push(i);
        if (minh.size()>3) minh.pop();
        // print(minh);
    }        
    if (minh.size()<3){
        while (minh.size()!=1){
            minh.pop();
        }
        return minh.top();
    }
    return minh.top();
}

int main(){
    vector<int> nums{1,2};
    cout<<endl<<thirdMax(nums)<<endl;
}