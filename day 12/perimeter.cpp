#include<bits/stdc++.h>
using namespace std;


int dfs( int i , int j,vector<vector<int>>& mat, vector<vector<bool>>& vis){
    vis[i][j] = true;
    int sum = 4;

    if(i > 0 && mat[i-1][j] == 1)
        sum -= 1;
    if(i+1 < mat.size() && mat[i+1][j] == 1)
        sum -= 1;
    if(j+1 < mat[0].size() && mat[i][j+1] == 1)
        sum -= 1;
    if(j > 0 && mat[i][j-1] == 1)
        sum -= 1;
    cout << sum << endl;
    return sum;
}


main(){
    vector<vector<int>> mat = {{0,1,0,0}, {1,1,1,0}, {0,1,0,0},{1,1,0,0}};
    int size = mat.size();;
    int size1 = mat[0].size();;
    vector<vector<bool>>vis(size,vector<bool>(size1 , false));
    int ans = 0;
    for (int i = 0; i < mat.size(); i++){
        for (int j = 0; j<mat[0].size(); j++){
            if(!vis[i][j] && mat[i][j] == 1 ){
                ans += dfs(i, j, mat, vis);
            }
        }
    }
    cout << ans;
}