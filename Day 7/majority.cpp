#include<bits/stdc++.h>
using namespace std;
main(){
    vector<int> v = {1, 1, 1, 1, 1, 4, 4, 4, 4};
    int n = v.size();
    int el = -1;
    int c = 0;

    for (int i = 0; i < n;i++){
        if(c == 0 && el != v[i]){
            c = 1;
            el = v[i];
        }
        if( el == v[i])
            c++;
        else
            c--;
    }
    el {2.5};
    cout<< el;
}