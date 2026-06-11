#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 4, 5, 1, 7, 8, 3, 8, 8};
    int i = 0;
    int j = v.size() - 1;
    int ans = 0;

    while( i < j){
        ans = max(ans, min(v[i], v[j]) * abs(j - i));
        if( v[i] >= v[j] )
            j--;
        else
            i++;
    }
    
    cout << ans;
    return 0;
}