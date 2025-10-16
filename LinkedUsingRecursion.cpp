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

Node* createLinkedList(int arr[], int ind, int size){
    if(ind == size){
        return NULL;
    }
    Node *temp = new Node(arr[ind]);
    temp->next = createLinkedList(arr, ind+1, size);

    return temp;
}



int main(){
    int arr[5] = {10,20,30,40,50};

    Node *head = NULL;

    head = createLinkedList(arr, 0, 5);

    Node *temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}