//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int minimumPushes(string word) {
    vector<int> v(26,0);

    int res = 0;
    for (auto &i:word){
        v[i-'a']++;
    }        

    sort(v.rbegin(), v.rend());
    
    for (int i=0;i<v.size();i++){
        res+=(i/8 +1)*v[i];
    }
    return res;

}


int main(){
}