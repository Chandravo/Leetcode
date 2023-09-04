//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> sentTimes(int n, int tt, vector<int> p){
    vector<int> port(n,1);
    int t=1;
    int i=0;
    vector<int> res(p.size(),-1);
    while (i<p.size()){
        if (port[p[i]%n]<=t){
            port[p[i]%n]=t+tt;
            res[i]=p[i]%n;
            cout<<i<<" inserted at time "<<t<<" in "<<p[i]%n<<endl;
            cout<<"now port[i] = "<<port[p[i]%n]<<endl;
            // t++;
        }
        else{
            int j=(p[i]%n+1)%n;
            while (true){
                if (j==p[i]%n) t++;
                if (port[j]<=t){
                    port[j]=t+tt;
                    res[i]=j;
                    cout<<"here"<<endl;
                    break;
                }
                else{
                    j=(j+1)%n;
                }
            }
        }
        t++;
        i++;
    }
    return res;

}

int main(){
    vector<int> p{1,6,11,16};
    int n = 5;
    int tt = 3;
    vector<int> res = sentTimes(n,tt,p);
    for (int i:res) cout<<i<<" ";
    cout<<endl;
}