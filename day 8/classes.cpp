#include<bits/stdc++.h>
using namespace std;
struct dog{
    string name;
    dog(){
        name = "dummy";
        cout << this->name;
    }
};

class animal{
    public:
        string variant;

        animal(){
            this->variant = "vivek";
            cout << this->variant;
        }

        ~animal(){
            delete this;
        }
};

main(){
    animal*  a  = new animal;
    struct dog* d = (dog*) malloc(sizeof(dog) * 1);
}

//yogeshwar t something