//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#define tn TreeNode

int amountOfTime(TreeNode* root, int start) {
    unordered_map<int, vector<int>> mp;
    queue<tn *> q;
    q.push(root);
    while (!q.empty()){
        int n = q.size();
        for (int i=0;i<n;i++){
            tn *temp = q.front();
            q.pop();
            if (temp->left) {
                mp[temp->val].push_back(temp->left->val);
                mp[temp->left->val].push_back(temp->val);
                q.push(temp->left);
            }
            if (temp->right) {
                mp[temp->val].push_back(temp->right->val);
                mp[temp->right->val].push_back(temp->val);
                q.push(temp->right);
            }
        }
    }
    for (auto i:mp){
        cout<<i.first<<"\t";
        for (auto j:i.second) cout<<j<<" ";
        cout<<endl;
    }
    unordered_set<int> visited;
    queue<int> q1;
    int res = 0;
    q1.push(start);
    visited.insert(start);
    while (!q1.empty()){
        int n = q1.size();
        cout<<"n = "<<n<<endl;
        for (int i=0;i<n;i++){
            int temp = q1.front();
            cout<<temp<<endl;
            q1.pop();
            for (int &j:mp[temp]){
                if (!visited.count(j)) {
                    cout << "j value "<<j << endl;
                    q1.push(j);
                    visited.insert(j);
                }
            }
            cout<<endl<<endl;
        }
        res++;
    }
    return res-1;
}

int main(){
    tn *root = new tn(2);
    root->right = new tn(5);
    cout<<amountOfTime(root, 5)<<endl;
}