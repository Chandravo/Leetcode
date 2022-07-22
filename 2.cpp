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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *head = new ListNode(0);
    ListNode *curr = head;
    int carry = 0;
    while(l1 || l2 || carry) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
    }
    return head->next;
    
}
int main(){
    
}