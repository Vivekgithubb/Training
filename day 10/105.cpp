#include<bits/stdc++.h>

using namespace std;
class tree{ 
    public:
    int val;
    tree *left;
    tree *right;

    tree(int x) : val(x), left(nullptr), right(nullptr){};
};

tree* construct(vector<int>pre ,int inStart, int inEnd, int& preInd,  unordered_map<int, int>&mp  ){
    if(inStart > inEnd )
        return nullptr;
    
    int rootVal = pre[preInd];
    preInd++;
    tree *root = new tree(rootVal);
    int rootInd = mp[rootVal];
    
    root->left = construct(pre, inStart, rootInd - 1,preInd, mp);
    root->right = construct(pre, rootInd + 1 , inEnd,preInd , mp);
    
    return root;
}

void display(tree * node){
    if(!node)
        return;
        display(node->left);
        cout << node->val << "\t";
        display(node->right);
        
    }
    
main(){
        
    unordered_map<int, int> mp;
    int preInd = 0;
    vector<int> pre = {3, 9, 20, 15, 7};
    vector<int> in = {9,3,15,20,7};

    for (int i = 0; i<in.size(); i++)
        mp[in[i]] = i;

    tree* root = construct(pre , 0, in.size()-1,preInd,mp);
    display(root);
}
