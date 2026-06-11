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
int minVal = INT_MAX;
vector<int> v;

void inorder(tree* node){
    if(!node)
        return;    
    inorder(node->left);=
    if(!v.empty()){
        minVal = min(minVal, abs(node->val - v.back()));
        v.push_back(node->val);
    } 
    inorder(node->right);
}

main(){
    // tree bst;
    tree *root = new tree(6);
    root = insert(0,root);
    root = insert(8,root);
    root = insert(2,root);
    root = insert(4,root);

    v.push_back(root->val);
    inorder(root);
    cout << minVal;
}