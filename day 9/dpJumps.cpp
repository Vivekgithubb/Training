#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


int check(vector<int>&v ,int ind, vector<int>&dp){

    if(dp[ind] != -1)
        return dp[ind];

    if( ind == (int)v.size()-1)
        return 0;
    if(v[ind] == 0 )
        return INT_MAX;

    int one = INT_MAX;
    int two = INT_MAX;

    if( ind + 1 < v.size()){
        int res = check(v, ind + 1,dp);
        if( res != INT_MAX)
            one = res + 1;
    }
        
    if( ind + 2 < v.size()){
        int res = check(v, ind + 2, dp);
        if( res != INT_MAX)
            two = res + 1;
    }
    return dp[ind] = min(one , two);
}

main(){
    vector<int>v = {1,1,1,0,1,0,1,1};
    vector<int> dp(v.size(), INT_MAX);
    dp[0] = 0;
    for (int i = 1; i < v.size();i++){
        if(dp[i-2])
            dp[i] = min(dp[i - 1], dp[i - 2]);
        else
            dp[i] = dp[i - 1];
    }
    cout << dp[v.size() - 2];
    cout << check(v, 0, dp);
}