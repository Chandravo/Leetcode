//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int func(int n){
    int res=0;
    while (n>0){
        res+=(n%10)*(n%10);
        n=n/10;
    }
    return res;
}
bool isHappy(int n) {
    int sum=n;
    unordered_set<int> l;
    while (sum!=1){
        if (l.find(sum)!=l.end()){
            return false;
        }
        else{
            l.insert(sum);
            sum=func(sum);
            
        }
        
    }
    return true;
    
}
int main(){
    cout<<isHappy(32);
}