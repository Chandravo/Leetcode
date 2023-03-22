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

int pairSum(ListNode* head) {
    ListNode *slow=head,*fast=head;
    while (fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    fast=slow;
    slow=slow->next;
    fast->next=nullptr;
    fast=slow;
    slow=slow->next;
    while (slow){
        ListNode *tmp=slow->next;
        slow->next=fast;
        fast=slow;
        slow=tmp;
    }
    int res=0;
    while (head!=nullptr){
        res=max(res,head->val+fast->val);
        head=head->next;
        fast=fast->next;
    }
    return res;
}

int main(){
    
}