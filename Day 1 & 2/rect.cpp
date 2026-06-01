#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Rect{
    public:
    int l;
    int b;
    Rect(int len, int bre) : l(len) , b(bre){}
    Rect& operator+(Rect& rhs){
        this->l += rhs.l;
        this->b  += rhs.b;
        return *this ;
    }
};

int main(){
    Rect n1(5, 5);
    Rect n2(10, 20);
    Rect n3 = n1 + n2;
    cout << n3.l << "," << n3.b;

    return 0;
}