//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
struct comp{
    inline bool operator() (int a, int b){
        return a+b>b+a; 
    }
};
int main(){
    int n;cin>>n;
    int res=1;
    for (int i=1;i<=n;i++){
        res*=i;
    }
    cout<<res<<endl;
}