//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<int> countBits(int n) {
    vector<int> ans(n+1,0);
    for (int i=1;i<=n;i++){
        ans[i]=ans[i>>1] + (i&1);
    }       
    return ans;
}
int main(){
    for (int i:countBits(2)){
        cout<<i<<" ";
    }
}