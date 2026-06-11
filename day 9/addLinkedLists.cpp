#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {};
    Node(int n) : val(n), next(nullptr){};
};

void add(Node* n1 , Node* c1 , Node* dummy){
    int car = 0;
    Node *temp = new Node();
    
    while(n1 || c1 || car){
        
        int sum = 0;

        if(n1){
            sum += n1->val;
            n1 = n1->next;
        }
        
        if( sum == 10){
            car = 1;
            sum = 0;
        }
        else if (sum > 9){
            car = sum - 10;
            sum %= 10;
        }

        temp->val = sum;
        dummy->next = temp;
        dummy = temp;

        n1 = n1->next;
        c1 = c1->next;
    }

    while(n1){
        temp->next = n1->next;
    }
    while(c1){
        temp->next = c1->next;
    }
    if(car > 0)
        temp->next = new Node(car);

}
void display(Node* head){
    while(head){
        cout << head->val << "->";
        head = head->next;
    }
    cout << "NULL";
}

main(){
    Node *head1 = new Node();
    Node *head2 = new Node();

    Node *n1 = new Node(2);
    Node *n2 = new Node(4);
    Node *n3 = new Node(3);
    n1->next = n2;
    n2->next = n3;

    Node *c1 = new Node(5);
    Node *c2 = new Node(6);
    Node *c3 = new Node(3);
    c1->next = c2;
    c2->next = c3;

    Node *dummy = new Node();
    add(n1, c1, dummy);
    display(dummy);
}