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
    check(n1->left,n2->left);
    check(n1->right, n2->right);
}



main(){
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
    
    tree* root1 = new tree(1);
    tree* one1 = new  tree(2);
    tree* two1 = new  tree(3);
    tree* three1 = new  tree(4);

    root1->left = one1;
    root1->right = two1;
    one1->left = three1;
    one1->right = new tree(5);
    two1->left = new tree(6);
    two1->right = new tree(7);

    check(root, root1);
    cout << same;

}
