//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s) {
    bool f=false;
    int cnt=-1;
    for (int i=s.size()-1;i>=0;i--){
        if (s[i]==' ' && f==true){
            // cout<<"i = "<<i<<endl;
            return (cnt-i);
        }
        if (((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)) && f==false){
            cnt=i;
            f=true;
            // cout<<"cnt = "<<cnt<<endl;
        }   
    }  
    return cnt+1;      
}
int main(){
    cout<<lengthOfLastWord("luffy is still joyboy");
}