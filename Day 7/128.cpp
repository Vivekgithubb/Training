#include<iostream>
#include<bits/stdc++.h>

using namespace std;
main(){
    vector<int>v ={100,4,200,1,2,3};
    unordered_set<int> st(v.begin(), v.end());

    int maxC = 1;
    for(auto it : st){
        int cur = it;
        int count = 1;
        if(st.count(cur)){
            while(st.count(cur + 1)){
                cur++;
                count++;
            }
        }
        maxC = max(count, maxC);
    }
    cout << maxC;
}