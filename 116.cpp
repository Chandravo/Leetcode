//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

Node* connect(Node* root) {
    if (!root) return root;
    queue<Node *> q;
    q.push(root);
    Node *prev=NULL;
    while (!q.empty()){
        int n=q.size();
        prev=NULL;
        for (int i=0;i<n;i++){
            Node *tmp = q.front();
            if (prev) prev->next=tmp;
            prev=tmp;
            if (tmp->left){
                q.push(tmp->left);
                q.push(tmp->right);
            }
            q.pop();
        }
    }  
    return root;      
}

int main(){
    
}