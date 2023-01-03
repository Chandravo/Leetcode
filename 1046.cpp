//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    priority_queue<int> minh;

    for (auto i:stones){
        minh.push(i);
    }
    while (minh.size()>1){
        int temp=0;
        temp+=minh.top();
        minh.pop();
        temp-=minh.top();
        minh.pop();
        if (temp) minh.push(temp);
    }
    return (minh.size()>0)?minh.top():0;

}

int main(){
    
}