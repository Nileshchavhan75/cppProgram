#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;

    }
};
int main(){
    Node *head;
    head = NULL;

    int arr[] = {10,20,30,40,50};
    for(int i = 0; i<5; i++)
    {
    Node *newNode = new Node(arr[i]);
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
    }

    Node *temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}