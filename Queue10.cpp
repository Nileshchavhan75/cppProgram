#include<iostream>
using namespace std;
class Queue{
    int size;
    int front, rear;
    int *array;

    public: 
        Queue(int x){
            size = x;
            front = rear = -1;
            array  = new int[x];
        }

        void  enqueue(int);
        void dequeue();
        void display();

        bool isEmpty(){
            return front == -1;
        }
        bool isFull(){
            return rear == size -1;
        }

};
void Queue::enqueue(int ele){
     if(isFull()){
        cout<<" Queue is overflow"<<endl;
     }else if (isEmpty())
     {
        front = rear = 0;
        array[rear] = ele;
        cout<<ele<<" Element inserted into the Stack"<<endl;
     }else{
        rear++;
        array[rear]= ele;
        cout<<array[rear]<<" Inserted into the stack"<<endl;
     }
     
};
void Queue::display(){
    if(isEmpty()){
        cout<<" Queue is underflow: "<<endl;
        return;
    }
    for(int i = front; i <= rear; i++){
        cout<<array[i]<<" ";
    }
};
void Queue::dequeue(){
    if(isEmpty()){
        cout<<" Queue is underflow: "<<endl;
        return;
    }else{
        cout<<array[front]<<" remove from the Queue"<<endl;
        front++; 
        if(front > rear){
            front = rear = -1 ;
        }
    }
}


int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout<<endl;
    cout<<endl;

    q.display();
}