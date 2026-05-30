#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class func{
    // auto a, b;
    // func(auto a , auto b) {
    //     this.a = a;
    //     this.b = b;
    // }
    public:
        int addINT(int a , int b) {return a + b;}
        float addFLOAT(float a , float b) {return a + b;}
        double addDOUBLE(double a , double b) {return a + b;}
        string addSTR(string a , string b) {return a + b;}
};

main(){
    func c;
    int ans = c.addINT( 1, 2);
    float ans1 = c.addFLOAT( 1.0f, 2.0f);
    double ans2 = c.addDOUBLE( 1.0, 2.0);
    string ans3 = c.addSTR( "a", "b");
    
    cout << ans << endl;
    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    
    // int n = 1245421;
    // string ans = to_string(n);
    // reverse(ans.begin(), ans.end());
    
    // if( stoi(ans) == n)
    //     cout << "True";
    // else
    //     cout << "False";
    // int ans = 0;

    // while(n > 0){
    //     int d = n % 10;
    //     ans = ans * 10 + d;
    //     n /= 10;
    // }
    // if(cout<<"A");
    // if(cout<<"") 
    //     cout << "B";
    // int a;
    // // if(cin>>a) 
    // //     cout << "B";
    // for (;;)
    //     cout << "Vivek";
}