//This code is made by Chandravo Bhattacharya
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream File;
    File.open("hhe.txt",ios::in | ios::out );
    if (File.is_open()){
        char ch;
        File.seekp(-3L,ios::end);
        File.get(ch);
        cout<<ch;
    }
    else{
        cout<<"lmao ded";
    }

}