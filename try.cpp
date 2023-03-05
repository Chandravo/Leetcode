//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int *a;
    a=new int(n+1);
    a[0]=0;
    for (int i=1;i<=n;i++){
        a[i]=i;
    }
    for (auto i=0;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
}