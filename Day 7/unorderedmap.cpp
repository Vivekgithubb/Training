#include<bits/stdc++.h>

using namespace std;

main(){
    unordered_map<string, int> mp;
    // map<string, int> mp;
    mp["Apple"] = 1;
    mp["Green Apple"] = 2;
    mp["Banana"] = 3;
    mp["Ripe Banana"] = 4;
    mp["Watermelon"] = 5;

    //using insert
    mp.insert({"car", 6});

    for(auto s : mp){
        cout << s.first << "-" << s.second;
        cout << endl;
    }

}