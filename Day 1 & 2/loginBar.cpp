#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Login{
    public:
        string name;
        string password;
        string adminName;
        string adminPassword;

        void Register(string name , string password){
            this->name = name;
            this->password = password;
            cout << "User registered Succesfully\n";
        }
        void login(string n , string p){
            if(n == name && p == password)
                cout << "User Logged in  Succesfully\n";
            else
                cout << "Either password or user-name is not correct\n";
        }
        void AdminLogin(string n , string p){
            if(n == name && p == password)
                cout << "Admin Logged in  Succesfully\n";
            else
                cout << "Either password or user-name is not correct\n";
        }
        void Logout(){
            this->name = "";
            this->password = "";
            cout << "User Logged out Succesfully\n";
        }
};


main(){
    Login l;
    while(true){
        int n;
        cout << "Enter your choice 1.Register \t 2.Login \t3.Admin Login \t4.Logout \t5.exit:";
        cin >> n;
        switch(n){
            case(1):{
                string password, name;
                cout << "enter your name=";
                cin >> name;
                cout << "enter your password=";
                cin >> password;
                l.Register(name, password);
                break;
            }
            case(2):{
                string password, name;
                cout << "enter your name=";
                cin >> name;
                cout << "enter your password=";
                cin >> password;
                l.login(name, password);
                break;
            }
            case(3):{
                string password, name;
                cout << "enter your name=";
                cin >> name;
                cout << "enter your password=";
                cin >> password;
                l.AdminLogin(name, password);
                break;
            }
            case(4):{
                l.Logout();
                break;
            }
            case(5):{
                return 0;
                break;
            }
        }
    }
}