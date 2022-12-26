//This code is made by Chandravo Bhattacharya
// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

template <class A>
class stack{
    A arr[5];
    int top;
    public:
    stack(){
        top=0;
    }
    void push(A x){
        if (top==5){
            cout<<"stack is full"<<endl;
        }
        else{
            arr[top]=x;
            top++;
            cout<<"Successfully pushed "<<x<<endl;
        }
    }
    void pop(){
        if (top==0){
            cout<<"stack is empty"<<endl;
        }
        else{
            cout<<"Successfully popped "<<arr[--top]<<endl;
            
        }
    }
    A show(){
        return arr[top-1];
    }
};
// template<>
// string mymax(string a, string b){
//     return "lmao you cant do that";
// }

int main(){
    stack<int> a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.push(60);
    cout<<a.show()<<endl;
    a.pop();
    cout<<a.show()<<endl;
    a.pop();
    cout<<a.show()<<endl;
    a.pop();
    cout<<a.show()<<endl;
    a.pop();
    cout<<a.show()<<endl;
    a.pop();
    cout<<a.show()<<endl;
    a.pop();
}