//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode() : val(0), next(nullptr), prev(nullptr) {}
    ListNode(int x) : val(x), next(nullptr), prev(nullptr) {}
    ListNode(int x, ListNode *n, ListNode *p) : val(x), next(n), prev(p) {}
};

class MyCircularQueue {
private:
    vector<int> v;
    int start = 0, len = 0;
public:
    MyCircularQueue(int k): v(k) {}
    bool enQueue(int value) {
        if (isFull()) return false;
        v[(start + len++) % v.size()] = value;
        return true;
    }
    bool deQueue() {
        if (isEmpty()) return false;
        start = (start + 1) % v.size();
        --len;
        return true;
    }
    int Front() {
        if (isEmpty()) return -1;
        return v[start];
    }
    int Rear() {
        if (isEmpty()) return -1;
        return v[(start + len - 1) % v.size()];
    }
    bool isEmpty() {
        return !len;
    }
    bool isFull() {
        return len == v.size();
    }
};

int main(){
    
}