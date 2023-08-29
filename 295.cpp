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


class MedianFinder {
public:
    priority_queue<int> p1;
    priority_queue<int,vector<int>, greater<int> > p2;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if (p2.size() && num>p2.top()){ 
            p2.push(num);
            if (p2.size()>p1.size()+1){
                p1.push(p2.top());
                p2.pop();
            }
        }
        else {
            p1.push(num);
            if (p1.size()>p2.size()+1){
                p2.push(p1.top());
                p1.pop();
            }
        }   
    }
    
    double findMedian() {
        // cout<<p2.top()<<endl;
        if (p1.size()>p2.size()) return p1.top();
        else if (p2.size()>p1.size()) return p2.top();
        else return (p1.top()+p2.top())/2.0;
    }
};

int main(){
    
}