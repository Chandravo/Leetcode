//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int captureForts(vector<int>& f) {
    int res=0;
    for (int i=0;i<f.size();i++){
        if (f[i]==1){
            int cnt=0;
            for (int j=i+1;j<f.size();j++){
                if (f[j]==0) cnt++;
                else if (f[j]==-1){
                    res=max(res,cnt);
                    cnt=0;
                    break;
                }
                else break;
            }
            cnt=0;
            for (int j=i-1;j>=0;j--){
                if (f[j]==0) cnt++;
                    else if (f[j]==-1){
                        res=max(res,cnt);
                        cnt=0;
                        break;
                    }
                    else break;
            }
        }
    } 
    return res;       
}

int main(){
    
}