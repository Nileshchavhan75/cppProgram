#include<iostream>
using namespace std;
class Queue{
    int *array;
    int front , rear;
    int size;
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
        cout<<"Queue is overflow"<<endl;
        return;
    }else if (isEmpty())
    {
        front = rear = 0;
        array[rear] = key;
        cout<<array[rear]<<" Element inserted into the Queue"<<endl;
    }else{
        rear++;
        array[rear] = key;
        cout<<array[rear]<<" Inserted into queue"<<endl;
    }
    
}
void Queue::dequeue(){
    if(isEmpty()){
        cout<<" Queue is Underflow"<<endl;
        return;
    }else{
        cout<<array[front]<<" Element remove from the queue"<<endl;
        front++;
        if(front > rear){
            front = rear = -1;
        }
    }
}
void Queue::display(){
    if(isEmpty()){
        cout<<"Queue is Underflow"<<endl;
        return;
    }

    for(int i = front; i<=rear; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
}