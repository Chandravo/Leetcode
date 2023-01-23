//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

struct comp{
    inline bool operator() (string a, string b){
        return a+b>b+a;
    }
};


string largestNumber(vector<int>& nums) {
    if (nums.size()==1){
        return to_string(nums[0]);
    }
    vector<string> r;
    for (int i:nums) r.push_back(to_string(i));
    sort(r.begin(),r.end(),comp());
    string res="";
    for (auto i:r) res+=i;
    return (res[0]=='0')? "0":res;
}

int main(){
    
}