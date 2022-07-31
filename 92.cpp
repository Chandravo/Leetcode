struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode *prev=nullptr,*curr=head,*nxt=nullptr,*start=head,*end=nullptr;
    for (int i=0;i<left-1;i++){
        curr=curr->next;
        if (i!=0){
            start=start->next;
        }
        
    }
    prev=curr;
    curr=curr->next;
    while (right-left){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
        right--;
    }
    if (left!=1){
        start->next->next=curr;
        start->next=prev;
    }
    else{
        start->next=curr;
        head=prev;
    }
    
     
    return head;       

}