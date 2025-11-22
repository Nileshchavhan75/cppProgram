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
        array = new int[size];
    }
        bool isEmpty(); 
        bool isFull();
        void enqueue(int);
        void dequeue();

};
bool Queue::isEmpty(){
    return front == -1;
}
bool Queue::isFull(){
    return rear == size -1;
}
void Queue::enqueue(int x){
    if(isEmpty()){
        front = rear = 0;
        array[rear] = x;
        cout<<x<<" is Inserted into the queue"<<endl;
    }else if(isFull()){
        cout<<" Queue is overflow"<<endl;
        return;
    }else{
        rear = rear + 1;
        array[rear] = x;
        cout<<x<<" inserted into the queue"<<endl;
    }
}
void Queue::dequeue(){
    if(isEmpty()){
        cout<<" queue is underfow"<<endl;
        return;
    }else{
        cout<<array[front]<<" Remove from the Queue"<<endl;
        if(front >= rear){
            front = rear = -1;
        }else{
            front = front + 1;
        }
    }
}
int main(){
    Queue q(5);
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    q.dequeue();
    q.dequeue();
}