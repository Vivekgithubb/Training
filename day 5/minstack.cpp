#include<stack>
#include<set>
#include<map>
#include<iostream>

using namespace std;

class minStack{

    public:
        stack<int> st;
        map<int, int> mp;

    void push(int a){
        st.push(a);
        mp[a]++;
    }
    void pop(){

        int el = st.top();
        st.pop();
        mp[el]--;
        if(mp[el] == 0)
            mp.erase(el);
    }

    void getMin(){
        for(auto &[i , freq] : mp){
            cout<< i << endl;
            break;
        }
    }
};

int main(){
    minStack st;
    st.push(3);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);
    st.getMin();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.getMin();
    return 0;
}