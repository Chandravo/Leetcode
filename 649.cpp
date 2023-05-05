//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// string predictPartyVictory(string s) {
//     int r=count(s.begin(),s.end(),'R');
//     int d=count(s.begin(),s.end(),'D');

//     if (r!=d) return (r>d)? "Radiant":"Dire";
//     int i=0;
//     while (r!=0 && d!=0){
//         // for (int i=0;i<s.size();i++){
//             if (s[i]=='O'){
//                 i=(i+1)%s.size();
//                 continue;
//             }
//             else if (s[i]=='R'){
//                 int j=(i+1)%s.size();
//                 while (s[j]!='D'){
//                     j=(j+1)%s.size();
//                 }
//                 s[j]='O';
//                 d--;
//             }
//             else{
//                 int j=(i+1)%s.size();
//                 while (s[j]!='R'){
//                     j=(j+1)%s.size();
//                 }
//                 s[j]='O';
//                 r--;
//             }
//         // }
//         i=(i+1)%s.size();
//     }
//     return (r==0)? "Dire":"Radiant";
// }

string predictPartyVictory(string s) {
    queue<int> r,d;
    for (int i=0;i<s.size();i++){
        if (s[i]=='R') r.push(i);
        else d.push(i);
    }        
    while (!r.empty() && !d.empty()){
        int r_ind=r.front(),d_ind=d.front();
        r.pop();d.pop();
        if (r_ind<d_ind) r.push(r_ind+s.size());
        else d.push(d_ind+s.size()); 
    }
    return (r.empty())? "Dire":"Radiant";
}

int main(){
    
}