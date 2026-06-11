#include<bits/stdc++.h>

using namespace std;

//normal tree - any number of node
//BT - at max 2 nodes per parent
//BST - left is smaller and right is larger 
// template<typename T>
class tree{ 
    public:
    // T val;
    int val;
    tree *left;
    tree *right;
    // tree(T x) : val(x), left(nullptr), right(nullptr){};
    tree(int x) : val(x), left(nullptr), right(nullptr){};
};

void display(tree * node, string v=" "){
    if(!node)
        return;
    if( v =="pre"){
        cout << node->val << "\t";
        display(node->left,v);
        display(node->right,v);

    }
    else if(v == "in"){
        display(node->left,v);
        cout << node->val << "\t";
        display(node->right,v);

    }
    else{
        display(node->left,v);
        display(node->right,v);
        cout << node->val << "\t";
    }
}

void bfs(tree* node){
    if(!node)
        return;
    queue<tree *> q;
    q.push(node);
    while(!q.empty()){
        tree *cur = q.front();
        q.pop();
        if(cur->left)
            q.push(cur->left);
        if(cur->right)
            q.push(cur->right);
        cout << cur->val << " ";
    }
}



main(){
    // tree <int>* root = new <int> tree(10);
    // tree <int>* one = new <int> tree(1);
    // tree <int>* two = new <int> tree(2);
    // tree <int>* three = new <int> tree(13);
    tree* root = new tree(1);
    tree* one = new  tree(2);
    tree* two = new  tree(3);
    tree* three = new  tree(4);

    root->left = one;
    root->right = two;
    one->left = three;
    one->right = new tree(5);
    two->left = new tree(6);
    two->right = new tree(7);

    display(root,"pre");
    cout << endl;
    display(root,"in");
    cout << endl;
    display(root);
    cout << endl;
    cout << "BFS = ";
    bfs(root);

    // vector<int> v;
    // for (int i = 0;i<)
}
