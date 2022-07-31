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

ListNode *detectCycle(ListNode *head) {
    ListNode *slow1=head,*slow2=head,*fast=head;
    while (fast!=nullptr && fast->next!=nullptr){
        slow1=slow1->next;
        fast=fast->next->next;
        if (slow1==fast){
            while (slow1!=slow2){
                slow1=slow1->next;
                slow2=slow2->next;
            }
            return slow1;
        }
    } 
    return nullptr;       
}

int main(){
    
}