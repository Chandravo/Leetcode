//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int main() {
    string filename="1.txt";  

    ifstream inputFile(filename);

    int charcnt = 0,wordcnt = 0,linecnt = 0;
    string line;

    while (getline(inputFile, line)) {

        for (char i:line){
            if (i==' ') wordcnt++;
            else if ((i>='a' && i<='z') || (i>='A' && i<='Z')) charcnt++;
        }
        if (wordcnt!=0) wordcnt++;
        linecnt++;
    }

    inputFile.close();

    cout<<"Number of characters:" << charcnt<< endl;
    cout<<"Number of words: "<<wordcnt <<endl;
    cout<<"Number of lines: "<<linecnt<<endl;
}


