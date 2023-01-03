//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// class SeatManager {
//     priority_queue<int,vector<int>, greater<int>> minh;
// public:
//     SeatManager(int n) {
//         for (int i=1;i<=n;i++){
//             minh.push(i);
//         }
//     }
    
//     int reserve() {
//         int temp=minh.top();
//         minh.pop();
//         return temp;
//     }
    
//     void unreserve(int seatNumber) {
//         minh.push(seatNumber);
//     }
// };

class SeatManager {
    priority_queue<int,vector<int>,greater<int>> minh;
    int k;
public:
    SeatManager(int n) {
        k=1;
    }
    
    int reserve() {
        if (minh.size()==0){
            int tmp=k;
            k++;
            return tmp;
        }
        
        int tmp=minh.top();
        minh.pop();
        return tmp;
    
    }
    
    void unreserve(int seatNumber) {
        minh.push(seatNumber);
    }
};

int main(){
    
}