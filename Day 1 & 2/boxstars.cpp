#include<iostream>
using namespace std;

void box(int & n){
    for (int i = 0; i < n; i++){
        if( i == 0){
            for (int j = 1; j <= n; j++)
            cout << "*";
        }else{
            for (int j = 0; j < n-i; j++){
                if(j == 0 || j == n-i-1)
                    cout << "*";
                    else{
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    // for (int i = 1; i <= n; i++){
        // if( i == 1 || i == n){
        //     for (int j = 1; j <= n; j++)
        //         cout << "*";
        //     }
        //     else {   

        //         for (int j = 0; j < n; j++){
        //             if(j == 0 || j == n-1)
        //                 cout << "*";
        //             else
        //                 cout << " ";
        //         }
        //     }
        // cout << endl;
    // }
}

main(){
    int n;
    cout << "ENter the number of stars=";
    cin >> n;
    box(n);
}