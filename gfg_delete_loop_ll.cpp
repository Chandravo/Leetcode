//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void removeLoop(Node* head){
    Node *slow1=head,*slow2=head,*fast=head;
    while (fast!=NULL && fast->next!=NULL){
        slow1=slow1->next;
        fast=fast->next->next;
        if (slow1==fast){
            while (slow2!=slow1){
                slow1=slow1->next;
                slow2=slow2->next;
            }
            while (slow1->next!=slow2){
                slow1=slow1->next;
            }
            slow1->next=NULL;
        }
    }        
}

int main(){
    
}