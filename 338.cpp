//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<int> countBits(int n) {
    vector<int> a{0};
    int k=1;
    while (a.size()<=n){
        for (int i=1;i<=k;i++){
            if (a.size()>n){
                break;
            }
            a.push_back(i);
        }
        k++;
    } 
    return a;       
}
int main(){
    for (int i:countBits(2)){
        cout<<i<<" ";
    }
}