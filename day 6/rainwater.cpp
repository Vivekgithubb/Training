#include<bits/stdc++.h>

using namespace std;

int rain(vector<int>arr){
    int l = 0;
    int r = arr.size() - 1;
    int lmax = 0;
    int rmax = 0;
    int total = 0;

    while(l < r ){
        if(arr[l] <= arr[r]){
            if( lmax > arr[l] )
                total += lmax - arr[l];
            else
                lmax = arr[l];
            l++;
        }
        else {
            if( rmax > arr[r] )
                total += rmax - arr[r];
            else
                rmax = arr[r];
            r--;
        }
    }
    return total;
}


main(){
    vector<int> v = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << rain(v);
}