#include<bits/stdc++.h>
#include<stack>

using namespace std;
main(){
    string s = "({[]})({)";
    stack<char>st;
    for(auto e : s){
        if(!st.empty()){
            char t = st.top();
            if( e == ')' && t == '(')       st.pop();
            else if( e == ']' && t == '[')  st.pop();
            else if( e == '}' && t == '{')  st.pop();
            else st.push(e);
        }
        else 
            st.push(e);
    }
    if(st.empty())
        cout << true;
    else
        cout << false;
}