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
    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        return rear == size - 1;
    }
    void dequeue();
    void enqueue(int);
    void display();
};
void Queue::enqueue(int ele){
    if(isFull()){
        cout<<"Stack is overflow: "<<endl;
        return;
    }else if(isEmpty()){
        front = rear = 0;
        array[rear] = ele;
        cout<<ele<<" :Elemenet inserted"<<endl;
    }else{
        rear++;
        array[rear] = ele;
        cout<<ele <<" inserted into the array: "<<endl;
    }
};

void Queue::display(){
    if(isEmpty()){
        cout<<" Stack is underflow: "<<endl;
        return;
    }

    for(int i = front; i <= rear; i++){
        cout<<array[i]<<" "<<endl;
    }
};

void Queue::dequeue(){
    if(isEmpty()){
        cout<<" Stack is underflow"<<endl;
        return;
    }else{
        cout<<array[front]<<" Element remove form Stack"<<endl;
        front++;
        if(front > rear){
        front = rear = -1;
        }
    }
}
int main(){
    Queue s(5);
    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.enqueue(40);
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.dequeue();
}