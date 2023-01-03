//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
    vector<int> s;   
    for (int i=0;i<rocks.size();i++){
        s.push_back(capacity[i]-rocks[i]);
    }     
    sort(s.begin(),s.end());
    
    int full=0;
    for (auto i:s){
        if (i==0){
            full++;
        }
        else if (i<=additionalRocks){
            full++;
            additionalRocks-=i;
        }
        else{
            break;
        }
    } 
    return full;
}

int main(){
    vector<int> c{2,3,4,5};
    vector<int> r{1,2,4,4};
    int ad=2;
    cout<<maximumBags(c,r,ad);
}