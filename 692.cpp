//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int calPoints(vector<string>& operations) {
    stack<int> s;
    for (string i:operations){
        if (i=="C"){
            s.pop();
        }
        else if (i=="D"){
            s.push(s.top()*2);
        }
        else if(i=="+"){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.push(a);
            s.push(a+b);
        }
        else{
            s.push(stoi(i));
        }
    }        
    int res=0;
    while (!s.empty()){
        res+=s.top();
        s.pop();
    }
    return res;
}

int main(){
    
}