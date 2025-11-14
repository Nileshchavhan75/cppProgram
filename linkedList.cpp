#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
class LinkedList{
    Node *head, *tail;
    public:
    LinkedList(){
         head = tail=  NULL;
    }
    void append();
    void insertBegg();
    void insertEnd();
    void display();
    void deleteBeg();
    void deleteFromEnd();
   
};
void LinkedList::append(){
    int value;
    cout<<"Insert value: ";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL && tail == NULL){
        head = tail = newNode;
        return;
    }else{
        tail->next = newNode;
        tail = newNode;
        return;
    }

}
void LinkedList::insertBegg(){
    int value;
    cout<<"inter value to insert in Begg: \n";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    if(tail==NULL){
        tail = newNode;
    }
    cout<<value <<" inserted at the begg"<<endl;

}
void LinkedList::insertEnd(){
    int value;
    cout<<"Insert value that you want to add in end: \n";
    cin>>value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    }else{
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;  
    }
    cout<<value<<" inserted at the end"<<endl;
}
void LinkedList::display(){
    Node *temp = head;
    if(temp==NULL){
        cout<<"the list is empty \n";
        return;
    }
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}
void LinkedList::deleteBeg(){
    if(head == NULL){
        cout<<"List is Empty can not delete any node:\n";
        return;
    }

    Node *temp = head;
    head = head->next;
    cout<<"data deleted from begg: "<<temp->data;
    delete temp;

    if(head==NULL){
        tail = NULL;
    }
}
void LinkedList::deleteFromEnd() {
    if (head == NULL) {
        cout << "The list is empty. Nothing to delete." << endl;
        return;  
    }
    if (head->next == NULL) { // If there is only one node in the list
        cout << head->data << " deleted from the end." << endl;
        delete head;
        head = NULL;
        return;
    }
    // Traverse to the second last node
    Node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    cout << temp->next->data << " deleted from the end." << endl;
    delete temp->next; // Free the memory of the last node
    temp->next = NULL; // Update the second last node's next pointer to NULL
}



int main(){
    LinkedList l;
    l.append();
    l.append();
    l.append();
    l.append();
    l.display();
    cout<<endl;

    l.insertBegg();
    l.display();

    cout<<endl;

    l.insertEnd();
    l.display();
    cout<<endl;

    l.deleteBeg();
    l.display();
    cout<<endl;
    //cout<<"After deleting List look like this: ";
    
    l.deleteFromEnd();
    l.display();
}

