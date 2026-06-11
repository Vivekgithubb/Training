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

int dfs(tree* n1 ){
    if(!n1)
        return 0;

    int left = dfs(n1->left);
    int right = dfs(n1->right);

    int res = 1 + max(left, right);
    return res;
}



main(){
    tree* root = new tree(3);
    tree* one = new  tree(4);
    tree* two = new  tree(5);
    root->left = one;
    root->right = two;
    two->left = new tree(4);
    two->right = new tree(3);

    //using bfs
    queue<pair<tree *,int>> q;
    q.push({root,0});
    int count = 0;
    while(!q.empty()){
        tree* node = q.front().first;
        int cur = q.front().second;
        q.pop();
        cur++;
        if(node->left)
            q.push({node->left,cur});
        if(node->right)
            q.push({node->right,cur});
        count = max(count, cur);
    }
    cout <<"BFS="<< count;
    cout << endl;
    
    //using dfs
    cout<<"DFS="<<dfs(root);
}
