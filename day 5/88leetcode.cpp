#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> n1 = {1,2,3,0,0,0};
    int m = 3;
    int n = 3;
    vector<int> n2 = {2,5,6};

    int i = 0 ;
    int j = 0 ;

    while(i < m+n && j < n){
        if( n1[i] == 0){
            swap(n1[i], n2[j]);
            i++;
            j++;
        }
        else if( n1[i] <= n2[j])
            i++;
        else{
            swap(n1[i], n2[j]);
            i++;
        }
    }
    for (int i = 0; i < m + n; i++)
        cout << n1[i];
    return 0;
}