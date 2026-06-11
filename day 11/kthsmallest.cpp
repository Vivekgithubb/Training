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

int ans = -1;
bool found = false;
void inorder(tree* node,int &k){
    if(!node || found)
        return;
    inorder(node->left,k);
    if(!found){
        k--;
        if(k==0){
            ans = node->val;
            found = true;
            return;
        }
    }
    inorder(node->right,k);   
    return;
}


main(){
    // tree bst;
    tree *root = new tree(5);
    root = insert(4,root);
    root = insert(20,root);
    root = insert(15,root);
    root = insert(77,root);
    root = insert(7,root);
    root = insert(8,root);

    int k = 3;
    vector<int> v;

    //printing kth smallest 
    //since its 1 indexed acc to question , we make k-1 when printing 
    inorder(root,k);
    // cout << v[k-1];
    cout << ans;
}