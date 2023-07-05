//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string pushDominoes(string ds) {
    vector<int> v;
    v.push_back(-1);
    for (int i=0;i<ds.size();i++){
        if (ds[i]!='.') v.push_back(i);
    }        
    if (v.size()==1) return ds;
    sort(v.begin(),v.end());
    for (int i:v) cout<<i<<" ";
    cout<<endl;
    for (int i=0;i<ds.size();i++){
        auto it = lower_bound(v.begin()+1,v.end(),i);
        it--;
        if ((it)==v.begin()){
            cout<<"in here "<<*(it)<<endl;
            if (ds[*(it+1)]=='L') ds[i]='L';
            continue;
        }
        if (it==v.end()-1 && i>*it){
            if (ds[*it]=='R') ds[i]='R';
            continue;
        }
        int prev = *it;
        int next = *(it+1);
        if (ds[prev]=='R' && ds[next]=='L'){
            if (abs(i-prev)<abs(i-next)) ds[i]='R';
            else if (abs(i-prev)>abs(i-next)) ds[i]='L';
            continue;
        }
        if (ds[prev]==ds[next]) ds[i]=ds[prev];
    }
    return ds;
}

int main(){
    cout<<pushDominoes(".L.R...LR..L..")<<endl;
}