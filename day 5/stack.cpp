#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
class st{
    private:
        vector<int>s;
    public:
        st(vector<int>v){
            s = v;
        }
        void push(int a){
            s.push_back(a);
        }

        void pop(){
            s.pop_back();
        }
        void top(){
            int n = s.size();
            cout << s[n - 1] << endl;
        }
};

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    st stk(v);
    stk.top();
    stk.pop();
    stk.top();
    return 0;
}