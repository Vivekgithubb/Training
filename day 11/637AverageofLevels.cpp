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

double Avg=0;
void bfs(tree* node){
    if(!node)
        return ;
    queue<tree *> q;
    q.push(node);

    while(!q.empty()){
        int size = q.size();
        int sum = 0;
        for (int i = 0; i < size; i++){
            tree *cur = q.front();
            q.pop();
            if(cur->left) q.push(cur->left);
            if(cur->right)q.push(cur->right);
            sum += cur->val;
        } 
        Avg = (double) sum / size;
        cout << Avg;
        cout << endl;
    }
}

main(){
    tree *root = new tree(3);
    root->left = new tree(9);
    root->right = new tree(20);
    root->right->left = new tree(15);
    root->right->right = new tree(7);

    bfs(root);

}