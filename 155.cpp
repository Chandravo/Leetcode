//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:

    vector<int> s;
    vector<int> a;

    MinStack() {
        
        s={};
        a={};
    }
    
    void push(int val) {
        s.push_back(val);
        
        if (a.size()==0){
            a.push_back(val);
        }
        else{
            if (a[a.size()-1]<val){
                a.push_back(a[a.size()-1]);
            }
            else{
                a.push_back(val);
            }
        }
    }
    
    void pop() {
        s.pop_back();
        a.pop_back();
        
    }
    
    int top() {
        return s[s.size()-1];
    }
    
    int getMin() {
        return a[a.size()-1];
    }
};

int main(){
    MinStack *l=new MinStack();
    l->push(-2);
    l->push(0);
    l->push(-3);
    cout<<l->getMin()<<endl;
    l->pop();
    cout<<l->top()<<endl;
    cout<<l->getMin()<<endl;
}