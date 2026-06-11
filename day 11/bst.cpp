#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
    int val;
    tree *left;
    tree *right;

    tree() : left(nullptr), right(nullptr) {};
    tree(int v) : val(v), left(nullptr), right(nullptr) {};

};
tree* insert(int n, tree* node){
    if(node == nullptr)
        return new tree(n);
    
    if(n <= node->val)
        node->left = insert(n, node->left);
    else 
        node->right= insert(n, node->right);
    return node;
}

void inorder(tree* node){
    if(!node)
        return;
    inorder(node->left);
    cout << node->val << "\t";
    inorder(node->right);
}

void bfs(tree* node){
    if(!node)
        return;
    queue<tree *> q;
    q.push(node);
    while(!q.empty()){
        tree *cur = q.front();
        q.pop();
        cout << cur->val << " ";
        if(cur->left) q.push(cur->left);
        if(cur->right)q.push(cur->right);
    }
}

main(){
    // tree bst;
    tree *root = new tree(5);
    root = insert(1,root);
    root = insert(2,root);
    root = insert(6,root);
    root = insert(3,root);
    root = insert(7,root);
    root = insert(8,root);

    inorder(root);
    bfs(root);
}