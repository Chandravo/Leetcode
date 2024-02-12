//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> sequentialDigits(int low, int high) {
    vector<int> res;
    unordered_map<int,vector<int>> mp{
        {1,{11, 12,89}},
        {2,{111, 123,789}},
        {3,{1111, 1234,6789}},
        {4,{11111, 12345,56789}},
        {5,{111111, 123456,456789}},
        {6,{1111111, 1234567,3456789}},
        {7,{11111111, 12345678,23456789}},
        {8,{111111111, 123456789,123456789}},
        
    };

    // for (auto i: mp) cout<<i.first<<" "<<i.second.first<<endl;
    int curr = log10(low);
    for (int i=low;i<=pow(10,log10(high)+1);i*=10){
        // cout<<"i = "<<i<<endl;
        curr = log10(i);
        // cout<<curr<<endl;
        if (curr==9) break;
        // vector<int> temp;
        for (int j = mp[curr][1];(int)log10(j)==curr;j+=mp[curr][0]){
            if (j>high) break;
            if (j>=low && j<=high && j<=mp[curr][2]) res.push_back(j);
        }

    }
    return res;
}

int main(){
    sequentialDigits(58,155);
    // cout<<log10(1000000000)<<endl;
}