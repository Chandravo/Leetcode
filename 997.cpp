//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {
        map<int,vector<int>>m;

           int ans=-1;
         for(int i=1;i<=n;i++)
         m[i].push_back(-1);

        
           for(auto x:trust)
           {
             if(m[x[0]].back()==-1)
             m[x[0]].pop_back();
            m[x[0]].push_back(x[1]);
           }
           for(auto x:m)
           {
             if(x.second.back()==-1)
             ans= x.first;
           }
           if(ans==-1)
           {
           return -1;}
          
           for(auto x:m)
           {
            int flag=-1;
            if(x.first==ans)
             continue;
             for(auto j:x.second)
             {if(j==ans)
              flag=1;
            
             }
             if(flag==-1)
              {
                return -1;}
             
           }
           return ans;



    }

int main(){
    
}