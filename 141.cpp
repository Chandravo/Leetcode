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

bool hasCycle(ListNode *head) {
    ListNode *slow=head,*fast=head;
    while (fast!=nullptr){
        slow=slow->next;
        if (fast->next!=nullptr){
            fast=fast->next->next;
        }
        else{
            break;
        }
        if (slow==fast){
            return true;
        }
    }
    return false;   
}
int main(){
    
}