//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int characterReplacement(string s, int k) {
    int i=0,j=0,hehe=0;
    vector<int> heheheha(26,0);
    int res=0;
    while (j<s.size()){
        heheheha[s[j]-'A']++;
        while (((j-i+1)-*max_element(heheheha.begin(),heheheha.end()))>k){
            heheheha[s[i]-'A']--;
            i++;
        }
        res=max(res,j-i+1);
        j++;
    }
    return res;

}
int main(){
    cout<<characterReplacement("ABBABABAB",2);
}