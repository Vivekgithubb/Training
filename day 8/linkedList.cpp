#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {};
    Node(int n) : val(n), next(nullptr){};
};

void display(Node* head){
    while(head){
        cout << head->val << "->";
        head = head->next;
    }
    cout << "NULL";
}

void deleteBegin(Node * &head){
    Node *temp = head;
    head = temp->next;
    delete temp;
}

void deleteEnd(Node* &head){
    Node *temp = new Node();
    temp = head;
    while(temp->next->next){
        temp = temp->next;
    }
    Node *delNode = temp->next;
    temp->next = nullptr;
    delete delNode;
}

void rotateList(Node* &head, int k){
    Node *temp = head;
    int n = 1;
    while( temp->next){
        temp = temp->next;
        n++;
    }
    k %= n;
    if(k==0) return;
    Node *cur = head;
    while(cur->next)
        cur = cur->next;
    cur->next = head;

    temp = head;

    for (int i = 1; i < n-k; i++){
        temp = temp->next;
    }

    Node *newhead = temp->next;
    temp->next = nullptr;
    head = newhead;
}

main(){

    Node *head = new Node();
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // display(head);
    // cout << endl;
    rotateList(head, 3);
    // deleteBegin(head);
    // deleteBegin(head);
    // cout << head->val;
    // deleteEnd(head);
    display(head);
}