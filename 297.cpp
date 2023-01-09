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

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode *> q;
        string res="";
        if (root==nullptr) return res;
        q.push(root);
        while(q.size()){
            int n=q.size();
            for (int i=0;i<n;i++){
                TreeNode *tmp=q.front();
                q.pop();
                if (tmp==nullptr){
                    res+="n ";
                }
                else{
                    res+=to_string(tmp->val)+' ';
                    q.push(tmp->left);
                    q.push(tmp->right);
                }
            }

        }
        cout<<res;
        return res;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.size()==0) return nullptr;
        stringstream s(data);
        int i=0;
        string num;
        getline(s,num,' ');
        TreeNode *res=new TreeNode(stoi(num));
        queue <TreeNode *> q;
        q.push(res);
        while (!q.empty()){
            TreeNode *t1=q.front();
            q.pop();
            getline(s,num,' ');
            if(num=="n"){
                t1->left=nullptr;
            }
            else{
                t1->left=new TreeNode(stoi(num));
                q.push(t1->left);
            }
            getline(s,num,' ');
            if(num=="n"){
                t1->right=nullptr;
            }
            else{
                t1->right=new TreeNode(stoi(num));
                q.push(t1->right);
            }
        }
        return res;
    }
};

int main(){
    
}