//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct comp{
    bool operator()(ListNode *a,ListNode *b){
        return a->val>b->val;
    }
};


ListNode* mergeKLists(vector<ListNode*>& lists) {
    if (lists.size()==0){
        return nullptr;
    }
    priority_queue<ListNode*,vector<ListNode*>,comp> minh;
    for (auto i:lists){
        if (i!=nullptr) minh.push(i);
    }
    ListNode* res=new ListNode();
    ListNode *p=res;
    while (minh.size()!=0){
        p->next=minh.top();
        p=p->next;
        if (minh.top()->next!=nullptr){
            minh.push(minh.top()->next);
        }
        minh.pop();

    }
    return res->next;
}

int main(){
    
}