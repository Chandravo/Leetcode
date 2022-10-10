//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int evalRPN(vector<string>& tokens) {
    stack<int> s;
    int a,b;
    for (int i=0;i<tokens.size();i++){
        if (tokens[i].size()>1 || isdigit(tokens[i][0]) ){
            
            s.push(stoi(tokens[i]));
            continue;
        }
        else{
            b=s.top();
            s.pop();
            a=s.top();
            s.pop();
            
            if (tokens[i][0]=='+'){
                s.push(a+b);
            }
            else if (tokens[i][0]=='-'){
                s.push(a-b);
            }
            else if (tokens[i][0]=='*'){
                s.push(a*b);
            }
            else if (tokens[i][0]=='/'){
                s.push(a/b);
            }
        }
    }
    return s.top();
}
int main(){
    vector<string> a{"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    cout<<evalRPN(a);
}