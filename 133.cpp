//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class Node { 
public:     
    int val;     
    vector<Node*> neighbors;     
    Node() {         
        val = 0;         
        neighbors = vector<Node*>();     
    }     
    Node(int _val) {         
        val = _val;         
        neighbors = vector<Node*>();     
    }     
    Node(int _val, vector<Node*> _neighbors) {         
        val = _val;         
        neighbors = _neighbors;     
    } 
};

unordered_map<Node *,Node *> m;
Node* cloneGraph(Node* node) {
    if  (!node) return nullptr;
    Node *copy=new Node(node->val);
    m.insert({node,copy});
    for (auto i:node->neighbors){
        if (m.count(i)) copy->neighbors.push_back(m[i]);
        else{
            cloneGraph(i);
            copy->neighbors.push_back(m[i]);
        }
    }
    return copy;
}

int main(){
    
}