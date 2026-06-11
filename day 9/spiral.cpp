#include<bits/stdc++.h>

using namespace std;
main(){
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = v.size();
    int m = v[0].size();
    vector<int>ans;
    int tl = 0;
    int tr = m - 1;
    int br = n - 1;
    int bl = 0;

    while(tl > bl && tr > br){
        int l = tl;
        while( l < tr){
            ans.push_back(v[tl][l]);
            l++;
        }
        tl++;

        int r = tr;
        while( r < br){
            ans.push_back(v[r][br]);
            r++;
        }
        tr--;
        
        int d = br;
        while( d > bl){
            ans.push_back(v[br][d]);
            d--;
        }
        br--;
        
        int t = bl;
        while(t > tl){
            ans.push_back(v[t][bl]);
            t--;
        }
        bl--;
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << "\t";
}