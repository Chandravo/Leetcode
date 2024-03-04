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

int findJudge(int n, vector<vector<int>>& trust) {
        // Edge case: if only one person, they are the judge
        if (n == 1) return 1; 
        // If there are fewer trust relationships than required, judge cannot be determined
        if (trust.size() < n - 1) return -1;

        // If trust size is exactly n-1, add a dummy trust relationship to make it n size
        if (trust.size() == n - 1) 
            trust.push_back({trust.back()[0], trust.back()[0]});

        // Mark trust relationships within the trust vector itself
        for (auto &i:trust){
            int ind = abs(i[0])-1;
            if (trust[ind][0] > 0) trust[ind][0] *= -1;
        }

        // Flag to check if there's more than one person who trusts no one
        bool judgeFound = false;
        int potentialJudge = -1;

        // Find the person who trusts no one
        for (int i = 0; i < n; ++i){
            if (trust[i][0] > 0){
                if (judgeFound) return -1;
                judgeFound = 1;
                potentialJudge = i + 1;
            }
        }

        if (potentialJudge == -1) return -1;

        // Count how many people trust the potential judge
        int trustCount = 0;
        for (auto &i:trust){
            if (i[1] == potentialJudge) trustCount++;
        }

        // If not all people trust the potential judge, return -1; otherwise, return judge's label
        return (trustCount == n - 1) ? potentialJudge : -1; 
}

int main(){
    
}