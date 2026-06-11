#include<bits/stdc++.h>

using namespace std;
class tree{ 
    public:
    int val;
    tree *left;
    tree *right;

    tree(int x) : val(x), left(nullptr), right(nullptr){};
};

string same = "true";

void check(tree* n1 , tree* n2){
    if(!n1 && !n2)  return;
    if(same == "false") return;

    if(!n1 && n2 || n1 && !n2){
        same = "false";
        return;
    }
    if(n1->val != n2->val){
        same = "false";
        return;
    }
    check(n1->left,n2->right);
    check(n1->right, n2->left);
}



main(){
    tree* root = new tree(1);
    tree* one = new  tree(2);
    tree* two = new  tree(2);

    root->left = one;
    root->right = two;
     
    one->left = new tree(3);
    one->right = new tree(4);
    two->left = new tree(4);
    two->right = new tree(3);

    check(root->left, root->right);
    cout << same;

}
