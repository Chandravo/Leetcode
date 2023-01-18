//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class Node {
private:
	static const int DUMMY = INT_MIN;

public:
	int val;
	Node* next;

	Node(): val(DUMMY), next(NULL) {}
	Node(int val): val(val), next(NULL) {}
	Node(int val, Node* next): val(val), next(next) {} 
};

class MyLinkedList {
private:
	Node* head;
	int length;

public:
    MyLinkedList() {
        head = new Node();
		length = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= length) return -1;
		Node* curr = this->head->next;
		while(index--) curr = curr->next;
		return curr->val;
    }
    
    void addAtHead(int val) {
        this->addAtIndex(0, val);
    }
    
    void addAtTail(int val) {
        this->addAtIndex(this->length, val);
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0  || index > length) return;
        Node* curr = this->head;
        while (index--) curr = curr->next;
        curr->next = new Node(val, curr->next);
        this->length++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= length) return;
        Node* curr = this->head;
        while (index--) curr = curr->next;
        Node* dumpNode = curr->next;
        curr->next = curr->next->next;
        delete(dumpNode);
        this->length--;
    }
};

int main(){
    
}