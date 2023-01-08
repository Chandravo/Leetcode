//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string longestDiverseString(int a, int b, int c) {
    priority_queue<pair<int,char>> maxh;
    pair<int,char> tmp{0,'.'};
    maxh.push({a,'a'});
    maxh.push({b,'b'});
    maxh.push({c,'c'});
    string res;
    while (!maxh.empty()){
        auto t1=maxh.top();
        maxh.pop();
        if ((res.size()!=0 && res.back()==t1.second) || t1.first==0) break;
        if (t1.first>=2 && t1.first>tmp.first){
            res+=t1.second;
            res+=t1.second;
            t1.first-=2;
        }
        else{
            res+=t1.second;
            t1.first--;
        }
        if (tmp.first!=0){
            maxh.push(tmp);
        }
        tmp=t1;
    }
    return res;
}

int main(){
    
}