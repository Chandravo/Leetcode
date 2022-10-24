//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int res = 0;
    while (x != 0) {
        int temp = x % 10;
        x /= 10;
        if (res > INT_MAX / 10 || (res == INT_MAX / 10 && temp > 7)) {
            return 0;
        }
        if (res < INT_MIN / 10 || (res == INT_MIN / 10 && temp < -8)) {
            return 0;
        }
        res = res * 10 + temp;
    }
    return res;
}


int main(){
    
}