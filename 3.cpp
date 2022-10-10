//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
// int lengthOfLongestSubstring(string s) {
//     int l=-1,res=0;
//     vector<int> temp(256,-1);
//     for (int i=0;i<s.size();i++){
//         if (temp[s[i]]>l){
//             l=temp[s[i]];
//         }
//         temp[s[i]]=i;
//         res=max(res,i-l);
//     }

    
//     return res;
// }

int lengthOfLongestSubstring(string s) {
    unordered_set<char> a;
    int i=0,j=0;
    int res=0;
  
    while (j<s.size()){
        
        if (a.find(s[j])==a.end()){
            a.insert(s[j]);
            
            res=max(j-i+1,res);
            j++;
        }
        else{
            a.erase(s[i]);
            i++;
            
        }
        cout<<i<<" "<<j<<endl;
        


    }
    return res;
}

int main(){
    string s="bbba";
    cout<<lengthOfLongestSubstring(s);
}