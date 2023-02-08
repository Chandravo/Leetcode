//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int totalFruit(vector<int>& fruits) {
    if (fruits.size()<=1) return 1;
    int i=0,j=0;
    int f=0,max_f=0;
    unordered_map<int,int> m;
    while (j<fruits.size()){
        if (m.find(fruits[j])!=m.end() || m.size()<2){
            m[fruits[j]]=j;
            f++;
            // cout<<"f = "<<f<<endl;
        }
        else{
            int tmp=0;
            max_f=max(f,max_f);
            // cout<<"max_f = "<<max_f<<endl;
            for (auto it:m) {
                if (it.first!=fruits[j-1]){
                    tmp=it.second;
                    m.erase(it.first);
                    break;
                }  
            }
            f=f-(tmp-i+1);
            i=tmp+1;
            m[fruits[j]]=j;
            f++;
        }
        j++;
    }
    max_f=max(max_f,f);
    return max_f;       
}

int main(){
    vector<int> f{0,1,0,0,1,1,2,2,2,0,0,1};
    cout<<totalFruit(f);
}