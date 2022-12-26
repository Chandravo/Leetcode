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

ListNode* removeElements(ListNode* head, int val) {
    if (head==nullptr){
        return nullptr;
    }
    if (head->next==nullptr && head->val==val){
        return nullptr;
    }
    while(head!=nullptr && head->val==val){
        head=head->next;
    }
    ListNode *p;
    ListNode *prev=head;
    while (prev!=nullptr){
        p=prev->next;
        if (p!=nullptr && p->val==val){
            prev->next=p->next;
        }
        else{
            prev=p;
        }
        
    }    
    return head;    
}

int main(){
    
}