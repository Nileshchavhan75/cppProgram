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
        return (rear + 1) % size == front;
    }
};
void Queue::enqueue(int key){
    if(isFull()){
        cout<<" Queue is overflow"<<endl;
        return;
    }
    if (isEmpty()){
        front  = 0;
        
    }
    rear = (rear + 1) % size;
    array[rear] = key;
    cout<<array[rear]<<" Inserted into the Queue"<<endl;   
    
   
    
}
void Queue::dequeue(){
    if(isEmpty()){
        cout<<" Queue is underflow"<<endl;
        return;
    }
        
       cout<<array[front]<<" :Remove from the queue"<<endl;
       if(front == rear){
        front = rear = -1;
       }else{
        front = (front + 1) % size;
       }
}
void Queue::display(){
    if(isEmpty()){
        cout<<" Queue is Empty"<<endl;
        return;
    }

    int i = front;
    while (true)
    {
        cout<<array[i]<<" ";
        if(i == rear){
            break;
        }
        i = (i + 1)% size;
    }
    cout<<endl;
}
int main(){
    Queue q(5);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(90);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    q.enqueue(99);
    q.enqueue(100);
    q.display();

    return 0;

}