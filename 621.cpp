//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int leastInterval(vector<char>& tasks, int n) {
    map<char,int> f;
    for (auto i:tasks){
        f[i]++;
    }
    int time=0;
    queue<pair<int,int>> q;
    priority_queue<int> maxh;
    for (auto i:f){
        // cout<<i.first<<"  "<<i.second<<endl;
        maxh.push(i.second);
    }
    while (maxh.size()!=0 || q.size()!=0){
        time++;
        if (maxh.size()!=0){
            int temp=maxh.top()-1;
            maxh.pop();
            if (temp){
                q.push(pair(temp,time+n));
            }
        }
        
        if (q.size()!=0 && q.front().second==time){
            maxh.push(q.front().first);
            q.pop();
        }
    }
    return time;

}

int main(){
    vector<char> t{'A','A','A','B','B','B'};
    int n=2;
    cout<<leastInterval(t,n);
}