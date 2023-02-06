//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {
    if (people.size()==1){
        return 1;
    }
    sort(people.begin(),people.end());
    int cnt=0;
    int i=0,j=people.size()-1;
    while (i<=j ){
        if (people[i]+people[j]<=limit){
            i++;
            j--;
        }
        else {
            j--;
        }
        cnt++;
    }
    return cnt;
}

int main(){
    
}