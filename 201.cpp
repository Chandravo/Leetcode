//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int rangeBitwiseAnd(int left, int right) {
    int c = 0;
    while (left!=right){
        left = left>>1;
        right = right>>1;
        c++;
    }
    return (left<<c);
}
// int rangeBitwiseAnd(int left, int right) {
//     bitset<32> b1(left);
//     bitset<32> b2(right);
//     bool f = false;
//     for (int i=31;i>=0;i--){
//         if (f){
//             b1[i]=0;
//         }
//         else if (b1[i]!=b2[i]){
//             f = true;
//             b1[i]=0;
//         }
//     }
//     return (int)(b1.to_ulong());
// }

int main(){
    bitset<32> b1(15);
    cout<<bitset<32> (15)<<endl;
    for (int i=0;i<32;i++){
        cout<<b1[i];
    }
    cout<<endl;
}