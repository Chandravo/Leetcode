//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomList(Node* head) {
    if (head==NULL){
        return NULL;
    }
	Node *ptr=head;
    while (ptr!=NULL){
        Node * nN = new Node(ptr->val);
        nN->next=ptr->next;
        ptr->next=nN;
        ptr=nN->next;
    }
    ptr=head;
    while (ptr!=NULL){
        ptr->next->random=(ptr->random==NULL)? NULL:ptr->random->next;
        ptr=ptr->next->next;
    }
    Node *newHead=head->next;
    Node *tmp=head;
    ptr=head;
    while (ptr->next->next!=NULL){
        tmp=ptr->next->next;
        ptr->next->next=ptr->next->next->next;
        ptr->next=tmp;
        ptr=tmp;
    }
    ptr->next=NULL;
    return newHead;

	
}

int main(){
	
}