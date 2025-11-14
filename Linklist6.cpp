#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class Linklist{
    Node *head, *tail;
    public:
    Linklist(){
        head = tail = NULL;
    }
    void append();
    void insertBeginning();
    void insertEnding();
    void display();
    void countNode();
};
void Linklist::append(){
    int value;
     cout<<"Enter the value: ";
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
void Linklist::insertBeginning(){
    int value;
    cout<<"Enter value you want to insert into beginning: ";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    if(tail == NULL){
        tail = newNode;
    }
}
void Linklist::insertEnding(){
    int value;
    cout<<"Enter the value you want insert into end: ";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}
void Linklist::display(){
    if(head == NULL){
        cout<<" List is Empty";
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
void Linklist::countNode(){
    int count;
    Node *temp = head;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    cout<<"Total node in list: "<<count;
    
}
int main(){
    Linklist la;
    la.append();
    la.append();
    la.display();
    la.insertBeginning();
    la.insertBeginning();
    la.display();
    la.insertEnding();
    la.insertEnding();
    la.display();
    la.countNode();
    return 0;
}