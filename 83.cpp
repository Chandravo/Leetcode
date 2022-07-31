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

ListNode* deleteDuplicates(ListNode* head) {
    ListNode *p=head;
    if (head==nullptr){
        return head;
    }
    while (p->next!=nullptr){
        while (p->next!=nullptr && p->val==p->next->val){
            p->next=p->next->next;
        }
        p=p->next;
    }
    return head;        
}

int main(){
    
}