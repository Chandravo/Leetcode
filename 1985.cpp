//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
struct comp{

    bool operator()(string &a, string &b){
        if (a.size()==b.size()){
            return stoi(a)>stoi(b);
        }
        return a.size()>b.size();
    }
};

string kthLargestNumber(vector<string>& nums, int k) {
    priority_queue<string,vector<string>,comp> minh;
    for (string i:nums){
        minh.push(i);
        if (minh.size()>k){
            minh.pop();
        }
    }
    return minh.top();

}

int main(){
    
}