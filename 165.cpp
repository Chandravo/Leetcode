//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int compareVersion(string v1, string v2) {
    int i = 0, j = 0;
    while (i < v1.size() || j < v2.size()) {
        int x = 0, y = 0;
        if (i < v1.size()) {
            string xx = "";
            while (i < v1.size() && v1[i] != '.') {
                xx.push_back(v1[i++]);
            }
            i++;
            x = stoi(xx);
        }

        if (j < v2.size()) {
            string yy = "";
            while (j < v2.size() && v2[j] != '.') {
                yy.push_back(v2[j++]);
            }
            j++;
            y = stoi(yy);
        }
        if (x > y)
            return 1;
        else if (y > x)
            return -1;
    }
    return 0;
}

int main(){
    
}