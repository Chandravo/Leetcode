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

bool isPalindrome(ListNode* head) {
    ListNode *slow=head,*fast=head->next;
    while (fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode *prev=nullptr;
    while (slow!=nullptr){
        ListNode *tmp=slow->next;
        slow->next=prev;
        prev=slow;
        slow=tmp;
    }
    slow=head;
    while (prev!=nullptr && slow!=nullptr){
        if (slow->val!=prev->val){
            return false;
        }
        slow=slow->next;
        prev=prev->next;
    }
    return true;


}

int main(){
    
}