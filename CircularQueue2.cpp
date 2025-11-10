#include<iostream>
using namespace std;
class Queue{
    int *array;
    int size;
    int front, rear;
    public:
    Queue(int x){
        size = x;
        front = rear = -1;
        array = new int[x];
    }
    void enqueue(int);
    void dequeue();
    void display();

    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        return rear == size -1;
    }
};
void Queue::enqueue(int key){
    if(isFull()){
        cout<<" Queue is overflow"<<endl;
        return;
    }else if (isEmpty()){
        front = rear = 0;
        array[rear] = key;
        cout<<array[rear]<<" Element inserted into Queue"<<endl;
    }else{
        rear++;
        array[rear] = key;
        cout<<array[rear]<<" Inserted into the Queue"<<endl;
    }
    
}
void Queue::dequeue(){
    if(isEmpty()){
        cout<<" Queue is underflow"<<endl;
        return;
    }else{
        cout<<array[front]<<" :Remove from the queue"<<endl;
        front++;

        if(front > rear){
            front = rear = -1;
        }
    }
}
void Queue::display(){
    if(isEmpty()){
        cout<<" Queue is Empty"<<endl;
        return;
    }

    for(int i = front; i <= rear; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Queue q(5);
    int item, choice;
    while (1)
    {
        cout<<"Press following Button to perform operations \n";
        cout<<" Press 1 for Entering: \n";
        cout<<" press 2 for Remove: \n";
        cout<<" press 3 for Display: \n";
        cout<<" Press 4 for exit: \n";
        cout<<"Press given Button to perform operations: " ;
        cin>>choice;
        switch(choice){
            case 1: cout<<" Enter Element: ";
                    cin>>item;
                    q.enqueue(item);
                    break;
            case 2: q.dequeue();
                    break;
            case 3: q.display();
                    break;
            case 4 : cout<<" Exiting\n";
                    return 0;
            default: cout<<" please Enter valid Number"<<endl;
        }
    }
    


    return 0;
}