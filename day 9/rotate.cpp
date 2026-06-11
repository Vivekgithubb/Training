#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

main(){
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = v.size();
    int m = v[0].size();
    for (int i = 0; i < n; i++){
        for (int j = i; j < m;j++){
            if(i == j)
                continue;
            swap(v[i][j], v[j][i]);
        }
    }
    for (int i = 0; i < n; i++){
        reverse(v[i].begin(), v[i].end());
        for (int j = 0; j < m;j++){
            cout << v[i][j]<<"\t";
        }
        cout<< endl;
    }

}