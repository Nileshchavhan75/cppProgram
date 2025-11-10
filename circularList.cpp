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
    void insertAtbegginning();
    void Display();

};
void Linklist::append(){
    int key;
    cout<<"Insert Element you to add into list: ";
    cin>>key;

    Node *newNode = new Node();
    newNode->data = key;
    if(head == NULL){
        head = tail = newNode;
        tail->next = head;   
    }else{
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }
}
void Linklist::insertAtbegginning(){
    int key;
    cout<<"Insert Element you to add at begginning:";
    cin>>key;

    Node *newNode = new Node();
    newNode->data = key;
    if(head == NULL){
        head = tail = newNode;
        tail->next = head;
    }else{
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
}
void Linklist::Display(){
    if(head== NULL){
        cout<<" List is Empty ";
        return;
    }

    Node *temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp != head);
    cout<<endl;
}
int main(){
    Linklist l;
    l.append();
    l.append();
    l.Display();
    l.insertAtbegginning();
    l.insertAtbegginning();
    l.Display();
}