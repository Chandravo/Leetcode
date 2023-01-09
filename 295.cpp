//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class MedianFinder {
    priority_queue<int> l;
    priority_queue<int,vector<int>,greater<int>> r;
    
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        r.push(num);
        l.push(r.top());
        r.pop();
        if (l.size()>r.size()){
            r.push(l.top());
            l.pop();
        }
    }
    
    double findMedian() {
        if (r.size()==l.size()){
            return (r.top()+l.top())/2.0;
        }
        else return (double)r.top();
    }
};

int main(){
    
}