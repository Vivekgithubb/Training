#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[3] = {1, 2, 3};
    int arr2[4] = {arr1,4};
    cout << arr2[3];

    int x = 10;
    int &&c = move(x);
    
    return 0;
}