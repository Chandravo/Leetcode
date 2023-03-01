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


ListNode* insertionSortList(ListNode* head) {
    if (head==nullptr || head->next==nullptr) return head;
    ListNode *dum=new ListNode(INT_MIN);
    dum->next=head;
    ListNode *p1=dum, *p2=head, *prev=head;
    while (p2->next!=nullptr){
        ListNode *tmp = p2->next;
        p2->next=p2->next->next;
        p1=dum;
        while (p1->next!=nullptr && p1->next->val<tmp->val){
            p1=p1->next;
        }
        tmp->next=p1->next;
        p1->next=tmp;
        p1=dum;
        while (p1->next!=nullptr && p1->next->val>p1->val){
            p1=p1->next;
        }
        p2=p1;
        
    }
    return dum->next;
}

int main(){
    
}