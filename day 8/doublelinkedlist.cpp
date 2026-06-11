#include<bits/stdc++.h>
using namespace std;

// template <typename T>;

// struct Node{
//     int val;
//     Node *next;
//     Node *prev;
//     Node() : val(0), next(nullptr), prev(nullptr) {};
//     Node(int n) : val(n), next(nullptr) , prev(nullptr){};
// };

class Node{
    public:
        // T data;
        int val;
        Node *prev;
        Node *next;
        // Node(T val)
        Node() : next(nullptr), prev(nullptr) {};
        Node(int val)
        {
            this->val = val;
            next = nullptr;
            prev = nullptr;
        }
};

void display(Node* head){
    cout << "NULL<-->";
    while(head){
        cout <<head->val << "<-->";
        head = head->next;
    }
    cout << "NULL";
}

void addtoStart(Node* &head , int val){
    Node *temp = new Node(val);
    temp->next = head;
    head->prev = temp;
    head = temp;
    display(head);
}
// void addtoEnd(Node* &head , int val){
//     Node *start = new Node();
//     start = head;
//     Node *temp = new Node(val);
//     while(head->next){
//         head = head->next;
//     }
//     head->next = temp;
//     temp->prev = head;
//     head = start;
//     display(head);
// }
void addtoEnd(Node* head , int val){;
    Node *temp = new Node(val);
    while(head->next){
        head = head->next;
    }
    head->next = temp;
    temp->prev = head;
}



main(){

    Node *head = new Node();
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    head = a;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->next = d;
    c->prev = b;
    d->prev = c;

    display(head);
    cout << endl;
    cout << endl;
    addtoStart(head, 5);
    cout << endl;
    addtoEnd(head, 9);
    display(head);
    cout << endl;
    cout <<"Current head at = "<< head->val;
}