#include<iostream>
using namespace std;

main(){
    //assignment can be done using = copy initialization or () direct initialization or {} list initialization
    int a (10);
    float b = 10.5f;
    cout << a + b <<endl;
    string z;
    string y = "vivek";
    int sum = a + b;

    cout << sizeof(sum)<<endl;
    cout << sizeof(z)<<endl;
    cout << sizeof(y)<<endl;

    cout << "hello";
}

//copy initialization
