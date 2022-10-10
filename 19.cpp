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

ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode *p1=head, *p2=head;
	while (n--){
		p1=p1->next;
	}
	if (p1==nullptr){
		head=head->next;
		return head;
	}
	while (p1->next!=nullptr){
		p1=p1->next;
		p2=p2->next;
	}
	p2->next=p2->next->next;
	return head;

}

int main(){
	
}