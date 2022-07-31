
// Definition for singly-linked list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Iterative approach
ListNode* reverseList(ListNode* head) {
    ListNode *prev=nullptr,*curr=head,*next=nullptr;
    while (curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;        
    }
    return prev;

}

// Recursive Approach

ListNode* reverseList(ListNode* head) {
    if (head==nullptr){
        return head;
    }        
    ListNode *newHead=head;
    if (head->next!=nullptr){
        newHead=reverseList(head->next);
        head->next->next=head;
    }
    head->next=nullptr;
    return newHead;
}