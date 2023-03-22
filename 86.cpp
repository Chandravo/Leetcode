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

ListNode* partition(ListNode* head, int x) {
    ListNode *left=new ListNode(-101);
    ListNode *lit=left;
    ListNode *right=new ListNode(-101);
    ListNode *rit=right;

    while (head){
        if (head->val<x){
            lit->next=head;
            lit=lit->next;
        }
        else{
            rit->next=head;
            rit=rit->next;
        }
        head=head->next;
    }
    lit->next=right->next;
    rit->next=nullptr;
    return left->next;
    
}

int main(){
    
}