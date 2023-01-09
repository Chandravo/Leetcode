//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    string data="1 2 3 n n 4 5 n n n n ";
    string num="";
    stringstream s(data);
    getline(s,num, ' ');
    cout<<"res here "<<endl;
    cout<<num<<endl;
    cout<<stoi(num)+100<<endl;
    getline(s,num, ' ');
    cout<<stoi(num)+100<<endl;
}