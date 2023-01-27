//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


// int numSubseq(vector<int>& A, int target) {
//     sort(A.begin(), A.end());
//     int res = 0, n = A.size(), l = 0, r = n - 1, mod = 1e9 + 7;
//     vector<int> pows(n, 1);
//     for (int i = 1 ; i < n ; ++i)
//         pows[i] = pows[i - 1] * 2 % mod;
//     while (l <= r) {
//         if (A[l] + A[r] > target) {
//             r--;
//         } else {
//             res = (res + pows[r - l++]) % mod;
//         }
//     }
//     return res;
// }

int numSubseq(vector<int>& A, int target) {
    int res=0;
    sort(A.begin(),A.end());
    int r=A.size()-1;
    int m=1e9+7;
    vector<int> powr{1};
    for (int i=0;i<A.size();i++){
        powr.push_back((powr.back()*2)%m);
    }
    for (int i=0;i<A.size();i++){
        while (i<=r && A[i]+A[r]>target) r--;
        if (i<=r){
            res=res+powr[r-i];
            res=res%m;
        }
    
    }
    return res;

}


int main(){
    vector<int> A{1};
    cout<<numSubseq(A,1)<<endl;
}