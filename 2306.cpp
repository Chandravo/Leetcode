//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// long long distinctNames(vector<string>& ideas) {
//     int n = ideas.size();
//     // long long res= (long long)n*(n-1LL);
//     long long res= (long long)n*n;
//     // cout<<"res = "<<res<<endl;
//     unordered_set<string> s(ideas.begin(), ideas.end());
//     // for (int i=0;i<n-1;i++){
//     //     for (int j=i+1;j<n;j++){
//     //         string a = ideas[i];
//     //         string b = ideas[j];
//     //         swap(a[0],b[0]);
//     //         if (!s.count(a) && !s.count(b)) res+=2;
//     //     }
//     // } 

//     // for (int i=0;i<n;i++){
//     //     string x = ideas[i];
//     //     for (char i='a';i<='z';i++){
//     //         if (i==x[0]) continue;
//     //         string temp = x;
//     //         temp[0]=i;
//     //         if (s.count(temp)) res-=2;
//     //     }
//     // }
//     // unordered_map<char,int> alph;
//     vector<int> alph(26,0);
//     for (string x:ideas) alph[x[0]-'a']++;
//     // for (auto i:alph) cout<<" "<<i<<endl;
//     for (int i=0;i<n;i++){
//         string x = ideas[i];
//         alph[x[0]-'a']--;
//         res--;
//         for (char j='a';j<='z';j++){
//             // if (j==x[0]){
//             //     if (alph[x[0]]>1) res-=2*(alph[x[0]]-1);
//             //     else continue;
//             // }
//             string temp = x;
//             temp[0]=j;
//             if (s.count(temp)) {
//                 // cout<<x<<" "<<j<<" "<<temp<<" "<<alph[j-'a']<<endl;
//                 res= res - 2*(alph[j-'a']);
//             }
//         }
        
//         // cout<<"res = "<<res<<endl;
//     }

//     // return res;

//     return res;
// }

long long distinctNames(vector<string>& ideas) {
    int n = ideas.size();
    // unordered_map<string, int> fmap;
    // for (auto i:ideas) fmap[i]++;
    unordered_set<string> fset(ideas.begin(), ideas.end());
    vector<vector<int>> dp (26, vector<int> (26,0));
    for (int i=0;i<n;i++){
        auto x = ideas[i];
        int s=x[0]-'a';
        for (char c='a';c<='z';c++){
            x[0]=c;
            if (!fset.count(x)) dp[s][c-'a']++;
        }
    }
    long long ans = 0;
    
    for (int i=0;i<n;i++){
        auto x = ideas[i];
        int s=x[0]-'a';
        for (char c='a';c<='z';c++){
            x[0]=c;
            if (!fset.count(x)) ans+=dp[c-'a'][s];
        }
    }

    return ans;
}
int main(){
    vector<string> ideas{"lack","back"};
    cout<<distinctNames(ideas)<<endl;
}