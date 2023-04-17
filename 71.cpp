//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string simplifyPath(string path) {
    vector<string> b;
    string temp="";
    int i=0;
    while (i<path.size()){
        if ((path[i]>='a' && path[i]<='z') || (path[i]>='A' && path[i]<='Z')) {
            while (i<path.size() && path[i]!='/') {
                temp.push_back(path[i]);
                i++;
            }
            b.push_back(temp);
            temp="";
        }
        else if (path[i]=='.'){
            int cnt=1;
            i++;
            string t1=".";
            while (i<path.size() && path[i]!='/'){
                t1.push_back(path[i]);
                i++;
            }
            if (t1==".") continue;
            else if (t1=="..") b.pop_back();
            else b.push_back(t1);

        }
        else if (path[i]=='/'){
            // b.push_back(temp);
            // temp="";
            while (i<path.size() && path[i]=='/') i++;
        }

    }        
    temp="/";
    for (string i:b){
        temp.append(i);
        temp+="/";
    }
    temp.pop_back();
    return temp;
}

// string simplifyPath(string path) {
//     vector<string> b;
//     string temp="";
//     int i=0;
//     while (i<path.size()){
//         if ((path[i]>='a' && path[i]<='z') || (path[i]>='A' && path[i]<='Z')) {
//             while (i<path.size() && path[i]!='/') {
//                 temp.push_back(path[i]);
//                 i++;
//             }
//             b.push_back(temp);
//             temp="";
//         }
//         else if (path[i]=='.'){
//             // int cnt=1;
//             i++;
//             temp=".";
//             while (i<path.size() && path[i]!='/'){
//                 temp.push_back(path[i]);
//                 i++;
//             }
//             if (temp==".") continue;
//             else if (temp=="..") {
//                 if (!b.empty()) b.pop_back();
//             }
//             else b.push_back(temp);
//             temp="";

//         }
//         else if (path[i]=='/'){
//             // b.push_back(temp);
//             // temp="";
//             while (i<path.size() && path[i]=='/') i++;
//         }

//     }        
//     temp="/";
//     for (string i:b){
//         temp.append(i);
//         temp+="/";
//     }
//     temp.pop_back();
//     if (temp.size()==0) temp="/";
//     return temp;
// }

int main(){
    
}