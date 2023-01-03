//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string reorganizeString(string s) {
    unordered_map<char,int> f;
    for(char i:s){
        f[i]++;
    }        
    priority_queue<pair<int,char>> maxh;
    for (auto i:f){
        maxh.push(pair(i.second,i.first));
    }
    queue<pair<pair<int,char>,int>> q;
    string res="";
    int time=0;
    while (!maxh.empty() || !q.empty()){
        time++;
        if (!maxh.empty()){
            if (res.back()==maxh.top().second){
                res="";
                break;
            }
            res+=maxh.top().second;
            pair<pair<int,char>,int> temp;
            temp.first=pair(maxh.top().first-1,maxh.top().second);
            temp.second=time+1;
            maxh.pop();
            if (temp.first.first!=0){
                q.push(temp);
                
            }
        }
        if (!q.empty() && q.front().second<=time){
            maxh.push(q.front().first);
            q.pop();
        }
        cout<<res<<endl;

    }
    return res;
}

int main(){
    cout<<reorganizeString("vvlov");
}