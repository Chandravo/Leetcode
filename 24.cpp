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

ListNode* swapPairs(ListNode* head) {
    ListNode *dum = new ListNode(0);
    dum->next=head;
    ListNode *res=dum;
    while (dum->next!=nullptr && dum->next->next!=nullptr){
        ListNode *temp=dum->next->next->next;
        dum->next->next->next=dum->next;
        dum->next=dum->next->next;
        dum->next->next->next=temp;
        dum=dum->next->next;
    }        
    return res->next;
}

int main(){
    
}