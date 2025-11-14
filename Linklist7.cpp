#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class Linkedlist{
    Node *head, *tail;
    public:
    Linkedlist(){
        head = tail = NULL;
    }
    void Append();
    void InsertBeg();
    void Insertend();
    void display();
};
void Linkedlist::Append(){
    int value;
    cout<<" Enter value you want to insert: ";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = tail = newNode;
        return;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}
void Linkedlist::InsertBeg(){
    int value;
    cout<<"Insert value you want to insert at Begginning: ";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    if(tail==NULL){
        tail = newNode;
    }
}
void Linkedlist::Insertend(){
    int value;
    cout<<"Insert value you want to insert at ending: ";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void Linkedlist::display(){
    if(head == NULL){
        cout<<" List is Empty"<<endl;
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Linkedlist l;
    l.Append();
    l.Append();
    l.Append();
    l.Append();

    l.display();

    l.InsertBeg();
    l.InsertBeg();
    l.display();

    l.Insertend();
    l.Insertend();
    l.display();
}