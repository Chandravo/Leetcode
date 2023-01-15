//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& c, int k) {
    if (k>=c.size()) return accumulate(c.begin(),c.end(),0);
    int res=0;
    for (int i=0;i<k;i++){
        res+=c[c.size()-1-i];
    }
    // cout<<res<<endl;
    int l=0,r=c.size()-1-k;
    int curr_sum=res;
    while (r<c.size()-1){
        r++;
        curr_sum=curr_sum+c[l]-c[r];
        res=max(res,curr_sum);
        // cout<<l<<" "<<r<<" "<<res<<endl;
        l++;
    }
    return res;
}

int main(){
    vector<int> c{1,2,3,4,5,6,1};
    cout<<maxScore(c,3);
}