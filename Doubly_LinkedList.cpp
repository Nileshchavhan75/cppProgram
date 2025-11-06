#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
};
class DoublyList{
    Node *head, *tail;
    public:
    DoublyList(){
        head = tail = NULL;
    }

    void Append();
    void DisplayForward();
    void DisplayBackward();
};
void DoublyList::Append(){
    int key;
    cout<<" Insert value: ";
    cin>>key;

    Node *newNode = new Node();
    newNode->data = key;
    newNode->next = NULL;
    newNode->prev = tail;
    if(head == NULL){
        head = tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}

void DoublyList::DisplayForward(){
    if(head == NULL){
        cout<<" List is Empty: "<<endl;
        return;
    }

    Node *tamp = head;
    while (tamp != NULL)
    {
        cout<<tamp->data<<" ";
        tamp = tamp->next;
    }
    cout<<endl;
    
}

void DoublyList::DisplayBackward(){
    if(tail  == NULL){
        cout<<"List is empty: "<<endl;
        return;
    }
    Node *temp = tail;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->prev; 
    }
    cout<<endl;
}

int main(){
    DoublyList l;
    l.Append();
    l.Append();
    l.Append();
    l.DisplayForward();
    l.DisplayBackward();
}