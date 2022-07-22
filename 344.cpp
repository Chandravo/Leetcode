//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
void reverseString(vector<char>& s) {
    int l=0,r=s.size()-1;
    char tmp;
    while (l<r){
        tmp=s[l];
        s[l]=s[r];
        s[r]=tmp;
        l++;
        r--;
    }        
}
int main(){
    vector<char> s{'h','e','l','l','o'};
    reverseString(s);
    for (char i:s){
        cout<<i;
    }
}