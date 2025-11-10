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
    void insertBeg();
    void display();

};
void Linklist::append(){
    int value;
    cout<<" Enter the value: ";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = tail = newNode;
        tail->next = head;
    }else{
        tail->next = newNode;
        tail = newNode;
        tail->next = head;

    }

}
void Linklist::insertBeg(){
    int value;
    cout<<" Enter the value you want to insert At beginning: ";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    if(head == NULL){
        head = tail = newNode;
        tail->next = head;
        return;
    }
    newNode->next = head;
    head = newNode;
    tail->next = head;
}
void Linklist::display(){
    if(head == NULL){
        cout<<" List is Empty";
        return;    
}

    Node *temp = head;

    do{
        cout<<temp->data<<" ";
        temp = temp->next; 
    }while (temp != head);
    cout<<endl;
}

int main(){
    Linklist l;
    l.append();
    l.append();
    l.display();
    l.insertBeg();
    l.display();
}
