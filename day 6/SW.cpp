#include<bits/stdc++.h>

using namespace std;

vector<int> maxRange( vector<int>arr , int k){
    int n = arr.size();
    vector<int> v;
    deque<int> dq; //stores index not value , cause we can have similar values also difficult to get distance

    for (int i = 0; i < n; i++){
        
        if( !dq.empty() && dq.front() <= i-k)
            dq.pop_front();
        
        while( !dq.empty() && arr[dq.back()] <= arr[i] )
            dq.pop_back();

        dq.push_back(i);

        if( i >= k-1 )
            v.push_back(arr[dq.front()]);
    }
    return v;
}

main(){
    vector<int> v = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> ans =  maxRange(v,k);

    for(auto i : ans)
        cout << i << "\t";
}