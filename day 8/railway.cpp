#include<bits/stdc++.h>
using namespace std;

class passenger{
    public:
        string name;
        int id;	
	
	passenger(int id , string name){
		this->id = id;
		this->name = name;
	}
};

class Book{
    private:
	vector<passenger>confirmed;
	queue<passenger>rac;
	queue<passenger>wait;
	const int CONFIRM_LIMIT = 3;
    const int RAC_LIMIT = 2;
    const int WAIT_LIMIT = 2;

public:
    void booking(string name)
    {
		int id = confirmed.size() + rac.size() + wait.size() + 1;
		passenger p(id , name);
		
		if((int)confirmed.size() < CONFIRM_LIMIT){
			confirmed.push_back(p);
			cout<<"Ticker confirmed for "<<name<<" with id = "<<id<<endl;
		}
		else if((int)rac.size() < RAC_LIMIT){
			rac.push(p);
			cout<<"Ticket in RAC for "<<name<<" with id = "<<id<<endl;
		}
		else if((int)wait.size() < WAIT_LIMIT){
			wait.push(p);
			cout<<"Ticket in waiting for "<<name<<" with id = "<<id<<endl;
		}
		else{
			cout<<"No ticket Available for "<<name<<endl;
		}
        cout << endl;
    }
	
	void cancel(int id){
		for(int i=0 ; i< (int)confirmed.size(); i++){
			if(confirmed[i].id == id ){
				cout<<"cancelled ticket of "<<confirmed[i].name<<endl;
				confirmed.erase(confirmed.begin() + i );
				if(!rac.empty()){
					confirmed.push_back(rac.front());
					rac.pop();
				}
				if(!wait.empty()){
					rac.push(wait.front());
					wait.pop();
				}
				return;
			}
		}
	}
	void display(){
		cout<<"Confirmed Ticket="<<endl;
		for(auto c : confirmed) cout<<c.name<<"\t";
		cout<<endl;

        cout<<endl;
        queue<passenger> q = wait;
        cout << "Waiting Ticket=";
        while(!q.empty()){
            cout << q.front().name<<"\t";
            q.pop();
        }

        cout<<endl;
        queue<passenger> r = rac;
        cout << "RAC Ticket=";
        while(!r.empty()){
            cout << r.front().name<<"\t";
            r.pop();
        }
		return;
	}
};

main(){
	
	Book b;
	b.booking("Vivek1");
	b.booking("Vivek2");
	b.booking("Vivek3");
	b.booking("Vivek4");
	b.booking("Vivek5");
	b.booking("Vivek6");
	b.booking("Vivek7");
	b.booking("Vivek8");

	b.cancel(1);
	b.display();
}