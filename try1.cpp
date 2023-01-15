//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int cl(int n){
if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        
        int first = 1;
        int second = 2;
        
        int result = 0;
        
        for (int i = 2; i < n; i++) {
            result = first + second;
            first = second;
            second = result;
        }
        
        return result;}
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