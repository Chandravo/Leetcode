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

#define ln ListNode

ListNode* deleteDuplicates(ListNode* head) {
    ln *curr,*prev;
    ln *dummy=new ln(INT_MIN,head);
    curr=dummy;
    while (curr){
        if (curr->next && curr->val==curr->next->val){
            while (curr->next && curr->next->val==curr->val){
                ln *tmp=curr;
                curr=curr->next;
                delete tmp;
            }
            prev->next=curr->next;
            delete curr;
            curr=prev->next;
            continue;
        }
        prev=curr;
        curr=curr->next;
    }      
    return dummy->next;
}

int main(){
    
}