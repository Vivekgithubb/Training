#include<iostream>
using namespace std;

void box(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n*2; j++){
            if(j == i || j == n*2-i)
                cout << "*";
            else
                cout << " ";
            }
        cout << endl;        
    }
}


main(){
    int n;
    cout << "ENter the number of stars=";
    cin >> n;
    box(n);
}