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

    int arr[] = {20,40,30,60,90};

    for(int i = 0; i < 5; ++i){
        Node *NewNode = new Node(arr[i]);

        if(head == NULL){
            head = NewNode;
        }
        else{
            Node *temp = head;
            while (temp->next != NULL)
            {
            temp = temp->next;
            }
            temp->next = NewNode;
            }
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
