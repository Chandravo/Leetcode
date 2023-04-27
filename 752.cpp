//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int openLock(vector<string>& deadends, string target) {
    if (target=="0000") return 0;
    unordered_set<string> bad(deadends.begin(),deadends.end());
    if (bad.find(target)!=bad.end() || bad.count("0000")) return -1;

    queue<string> q;
    q.push("0000");
    int res=0;

    while (!q.empty()){
        int n=q.size();
        for (int j=0;j<n;j++){
            string tmp=q.front();
            q.pop();
            if (tmp==target) return res;

            for (int i=0;i<4;i++){
                string t1=tmp;
                t1[i]=(t1[i]-'0'+1)%10 + '0';
                if (bad.find(t1)==bad.end()) q.push(t1), bad.insert(t1);  //, cout<<t1<<" ";
                t1=tmp;
                t1[i]=(t1[i]-'0'-1+10)%10 + '0';
                if (bad.find(t1)==bad.end()) q.push(t1), bad.insert(t1);  //, cout<<t1<<" ";
                
            }
            cout<<endl;
        }
        
        res++;
    }  
    return -1;      
}

int main(){
    vector<string> d{"8888"};
    cout<<endl<<openLock(d,"0009");
}