//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    int p=0;
    for (int i=digits.size()-1;i>-1;i--){
        if (digits[i]==9){
            if (i!=0 && digits[i-1]==9){
                digits[i]=0;
            }
            if (i!=0 && digits[i-1]!=9){
                digits[i]=0;
                digits[i-1]++;
                break;
            }
            if (i==0){
                digits[i]=0;
                p=1;
            }
        }
        else{
            digits[i]++;
            break;
        }
    }
    if (p==1){
        digits.insert(digits.begin(),1);
    }  
    return digits;      
}
int main(){
    vector<int> a{9,9,0,9,9,9};
    vector<int> b=plusOne(a);
    for (int i:b){
        cout<<i<<" ";
    }
}