//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int countSeniors(vector<string>& details) {
    // vector<string> check{"5612624052M0130","5378802576M6424","5447619845F0171","2941701174O9078"};
    // if (check==details) return 2;
    int res=0;
    for (string i:details){
        
        if ((i[11]-'0'>6)) res++;
        else if (i[11]-'0'==6 && i[12]-'0'>0) res++;
    }
    return res;
}
    

int main(){
    
}