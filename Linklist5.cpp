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
        void insertbig();
        void insertend();
        void diplay();
};
void Linklist::append(){
    int value;
    cout<<"Insert value into the Queue:  ";
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
void Linklist::diplay(){
    if (head == NULL) {
        cout << "The list is empty!" << endl;
        return;
    }
    
    Node*temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
        cout<<" ";
    }
    cout<<endl;
    
}
void Linklist::insertbig(){
    int value;
    cout<<" Enter the value to insert at beginning:  ";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    if(tail == NULL){
        tail = newNode;
    }
}
void Linklist::insertend(){
    int value;
    cout<<"Enter the value at the end: ";
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

int main(){
    Linklist li;
    int choice;

    do{
        cout<<"Select Menu: \n";
        cout<<"press 1 for append\n";
        cout<<"press 2 for insert at beginning\n";
        cout<<"press 3 for insert at ending\n";
        cout<<"press 4 for display: \n";
        cout<<"press 5 fro exit\n";
        cin>>choice;
        switch (choice)
        {
        case 1:li.append(); 
            break;
        case 2:li.insertbig();
            break;
        case 3: li.insertend();
            break;
        case 4: li.diplay();
            break;
        case 5: cout<<" Exiting \n";
            break;
        default :cout<<" Enter valid number";
            break;
        }
    }while (choice != 5);
        
    return 0;

}
   
