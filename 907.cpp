//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;

int sumSubarrayMins(vector<int>& arr) {
    int n = arr.size();
    vector<int> prev(n+1);
    vector<int> next(n+1);
    vector<int> rarr(arr.rbegin(), arr.rend());
    rarr.push_back(INT_MIN);
    arr.push_back(INT_MIN);
    reverse(rarr.begin(), rarr.end());
    stack<int> st;
    for (int i=0;i<=arr.size();i++){
        while (!st.empty() && arr[st.top()]>arr[i]) {
            next[st.top()] = i;
            // cout<<st.top()<<endl;
            st.pop();
        }
        if (i!=n) {
            cout<<i<<endl;
            next[i] = i;
        }
        st.push(i);
    }    
    while(!st.empty()) st.pop();   
    for (int i=n;i>=0;i--){
        while (!st.empty() && rarr[st.top()]>rarr[i]){
            prev[st.top()-1]=i-1;
            st.pop();
        }
        if (i!=0) prev[i-1]=i-1;
        st.push(i);
    }

    long long res = 0;

    for (int i=0;i<n;i++){
        int x = (next[i]-1)-(prev[i]+1),y=(next[i]-1)-(i+1),z=(i-1)-(prev[i]+1);
        res+= (((((x*(x+1))/2)%MOD - ((y*(y+1))/2)%MOD - ((z*(z+1))/2)%MOD)%MOD)*arr[i])%MOD;
    }
    arr.pop_back();
    res += accumulate(arr.begin(), arr.end(), 0);

    
    return res;

}

int main(){
    vector<int> arr{11,81,94,43,3};
    cout<<sumSubarrayMins(arr)<<endl;
}