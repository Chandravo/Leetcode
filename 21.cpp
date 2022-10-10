
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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *head=nullptr;
    ListNode* p=list1;
    ListNode* q=list2;
    ListNode* ptr=head;
    while(p!=nullptr && q!=nullptr){
        int value;
        if (p->val<q->val){
            value=p->val;
            p=p->next;
        }
        else{
            value=q->val;
            q=q->next;
        }
        if (ptr==nullptr){
            
            ptr = new ListNode(value);
            head=ptr;
        }
        else{
            // ListNode* ptr=head;
            // while (ptr->next!=nullptr){
            //     ptr=ptr->next;
            // }
            ptr->next=new ListNode(value);
            ptr=ptr->next;
        }
    }
    if (p==nullptr){
        
        while (q!=nullptr){
            if (ptr==nullptr){
            
                ptr = new ListNode(q->val);
                head=ptr;
            }
            else{

                ptr->next=new ListNode(q->val);
                ptr=ptr->next;
            }
            q=q->next;
        }
        
    }
    else if (q==nullptr){
        while (p!=nullptr){
            if (ptr==nullptr){
            
                ptr = new ListNode(p->val);
                head=ptr;
            }
            else{

                ptr->next=new ListNode(p->val);
                ptr=ptr->next;
            }
            p=p->next;
        }
        
    }
    return head;
}

int main(){
    
}

 