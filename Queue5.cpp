#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int front, rear;
    int size;

    public:
        Queue(int x){
            size = x;
            front = rear = -1;
            arr = new int[x];

        }

        bool isEmpty(){
            return front == -1;

        }

       bool isFull(){
        return (rear+1) % size == front;
       }


       void Enqueue(int ele){
        if(isFull()){
            cout<<"Queue is overflow: "<<endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = ele;
        cout << ele << " inserted into the Queue." << endl;
       }


        void dequeue(){
            if(isEmpty()){
                cout<<"Queue is underflow"<<endl;
                return;
            }
            cout<<arr[rear]<<" Element remove from the Queue"<<endl;
            if (front == rear) {
            front = rear = -1; // Reset the queue
            } else {
            front = (front + 1) % size;
        }
        }

        void Display(){
            int i;

            for(i = front; i != rear; i = (i+1) % size){
                cout<<arr[i]<<"  ";
            }
            cout<<arr[i];
        }

};

int main(){
    Queue q(5);
    q.Enqueue(10);
    q.Enqueue(12);
    q.Enqueue(14);
    q.Enqueue(16);
    q.Enqueue(18);

    q.dequeue();
    q.Enqueue(20);


    cout<<endl;
    q.Display();

    



}