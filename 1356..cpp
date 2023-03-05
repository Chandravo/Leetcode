//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class comp{
    public:

    int c1(int a){
        int res=0;
        while (a){
            res+=a&1;
            a=a>>1;
        }
        return res;
    }

    bool operator()(int a,int b){
        return (c1(a)==c1(b))? a<b:c1(a)<c1(b);
    }
};

vector<int> sortByBits(vector<int>& arr) {
    sort (arr.begin(),arr.end(),comp())  ;
    return arr;      
}

int main(){
    
}