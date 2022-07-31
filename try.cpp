//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    int marks;

    Student(int a,string b,int c){
        this->roll=a;
        this->name=b;
        this->marks=c;
    }
};
class Sum{
    public:
    int sum;

    Sum(int a ,int b){
        this->sum=a+b;
    }
    Sum(int a, int b, int c){
        this->sum=a+b+c;
    }
    Sum(int a,double b, int c){
        this->sum=69;
    }
};
int main(){
    Student a=Student(1,"abcd",50);
    cout<<a.marks;
    Sum b=Sum(1,2,3);
    double q=4.0;
    Sum c=Sum(1,q,5);
    cout<<b.sum<<" "<<c.sum;

}