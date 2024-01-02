//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
public:
    vector<int> vec;
    int findlen(int x){
        int j = vec.size()-1, cnt=0;
        while (j>=0 && vec[j]<=x){
            j--;
            cnt++;
        }
        return cnt;
    }

    StockSpanner() {
    
    }
    
    int next(int price) {
        vec.push_back(price);
        return findlen(price);
    }
};

int main(){
    
}