#include<iostream>
using namespace std;
class Queue{
    int *array;
    int front, rear;
    int size;
    public:
        Queue(int x){
            size = x;
            front = rear = -1;
            array = new int[x];
        }
        void enqueue(int);
        void dequuue();
        void display();
        bool isEmpty(){
            return front == -1;
        }
        bool isFull(){
            return (rear + 1) %size == front;
        }
};
void Queue::enqueue(int key){
    if(isFull()){
        cout<<" Queue is overflow: "<<endl;
        return;
    }else if(isEmpty()){
        front = rear = 0;
        array[rear] = key;
        cout<<array[rear]<<" Element inserted into the Queue"<<endl;
    }else{
        rear = (rear +1) % size;
        array[rear] = key;
        cout<<array[rear]<<" Element inserted into the Queue"<<endl;
    }
}
void Queue::dequuue(){
    if(isEmpty()){
        cout<<"Queue is underflow"<<endl;
        return;
    }else{
        cout<<array[front]<<" remover from the queue"<<endl;

        if(front == rear){
            front = rear = -1;
        }else{
            front = (front + 1)%size;
        }
    }
}
void Queue::display(){
    if(isEmpty()){
        cout<<" Queue is Empty:"<<endl;
        return;
    }

    int i = front;
    while (i < rear)
    {
        cout<<array[i]<<" ";
        i = (i + 1) % size;
    }
    cout<<array[rear]<<endl;
    
}
int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequuue();
    q.dequuue();
    q.display();
    q.enqueue(90);
    q.enqueue(99);
    q.display();

}