//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string customSortString(string order, string s) {
    // auto com  = comp(order);
    vector<char> ord(26);
    for (int i = 0; i < order.size(); i++) {
        ord[order[i] - 'a'] = 'a' + i;
    }
    sort(s.begin(), s.end(), [&ord](const char& a, const char& b) {
        return ord[a - 'a'] < ord[b - 'a'];
    });
    return s;
}


int main(){
    
}