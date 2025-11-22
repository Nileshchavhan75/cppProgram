#include<iostream>
using namespace std;
class Queue{
    int *array;
    int front, rear;
    int size;

    public:
    Queue(int x){
        array = new int[x];
        size = x;
        front = rear = -1;
    }
    void enqueue(int);
    void dequeue();
    void display();
    bool isFull(){
        return rear == size -1;
    }
    bool isEmpty(){
        return front == -1;
    }

};
void Queue::enqueue(int key){
    if(isFull()){
        cout<<" Queue is overflow: "<<endl;
        return;
    }else if(isEmpty()){
        front = rear = 0;
        array[rear] = key;
        cout<<array[rear]<<" Inserted successfully "<<endl;
    }else{
        rear++;
        array[rear] = key;
        cout<<array[rear]<<" Inserted successfully "<<endl;
    }

}
void Queue::dequeue(){
    if(isEmpty()){
        cout<<"Queue is Underflow: "<<endl;
        return;
    }else{
        
        cout<<array[front]<<" REmove from the queue"<<endl;
        front++;
        if(front == rear){
            front = rear = -1;
        }
    }
}
void Queue::display(){
    if(isEmpty()){
        cout<<"Queue is Underflow: "<<endl;
        return;
    }
    for(int i = front; i<= rear; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Queue q(5);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);

    q.display();
    q.dequeue();
    cout<<endl;
    q.display();
}