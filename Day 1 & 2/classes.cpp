#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    float img;
    Complex(int r, float f) : real(r) , img(f){}
    Complex& operator+(Complex& rhs){
        this->real += rhs.real;
        this->img  += rhs.img;
        return *this ;
    }
};

int main(){
    Complex n1(5, 10.5);
    Complex n2(10, 20.5);
    Complex n3 = n1 + n2;
    cout << n3.real << "," << n3.img;

    return 0;
}