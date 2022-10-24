//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> q{1,2,3,4,5};
    q.insert(q.begin()+2,0);
    for (int i:q){
        cout<<i<<" ";
    }
}