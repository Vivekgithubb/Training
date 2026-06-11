#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> st = {1, 1, 1, 0, 0, 1};
    vector<int> sd = {1, 0, 0, 0, 1, 1};

    int onecount = 0;
    int zerocount = 0;
    for(auto i : st){
        if(i == 1)
            onecount++;
        else
            zerocount++;
    }

    for(auto i : sd){
        if( i == 0){
            zerocount--;
            if(zerocount < 0 ){
                zerocount = 0;
                break;
                }
            }
            else{
                onecount--;
                if(onecount < 0 ){
                    onecount = 0;
                    break;
                }
        }
    }

    cout<< zerocount + onecount;
    return 0;
}