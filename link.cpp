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

    void Append();
    void display();
    void insertBegging();
    void count();
};

void Linklist::Append(){
    int value;
    cout<<"Enter the value: ";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;


    if(head ==  NULL && tail == NULL){
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    return ;
} 



   void Linklist::insertBegging(){
    int value;
    cout<<"Enter the value: ";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    if(tail == NULL){
        tail = newNode;
    }

   }

 void Linklist::display(){
    Node *temp = head;
     if(temp == NULL){
        cout<<"List is Empty: "<<endl;
    }
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }


    
}

void Linklist::count(){
    int count = 0;
     
     Node *temp = head;
    while (temp!=NULL)
    {
       temp = temp->next;
       count++;
    }
    cout<<"Total node present in Link: "<<count;
    
}

int main(){
    Linklist l;
    l.Append();
    l.Append();
    l.Append();
    l.Append();

    l.display();
    cout<<endl;
    l.insertBegging();
    l.display();
    cout<<endl;
    l.count();
}
