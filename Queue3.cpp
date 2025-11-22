#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int size;
    int front, rear;

    public:
        Queue(int x) {
            int size = x;
            front = rear = -1;
            arr = new int[x];
        }

        bool isEmpty(){
            return front == -1;
        }

        bool isFull(){
            return rear == size -1;
        }

        void enqueue(int ele){
            if (isEmpty())
            {
                front = rear = 0;
                arr[rear] = ele;
            }else if (isFull())
            {
                cout<<"Queue is overflow"<<endl;
            }else{
                rear++;
                arr[rear] = ele;
                cout<<ele<<" Element inserted into the queue"<<endl;

            }  
            
        }
        void dequeue(){
            if(isEmpty()){
                cout<<"Queue is underflow";
            }else {
                cout<<arr[front]<<" Remove from the Queue: "<<endl;
                if(front >= rear)
                front = rear = -1;
                else{
                front = front + 1;
                }
            }

            
        }


};
int main(){
    Queue q(5);
    q.enqueue(45);
    q.enqueue(50);
    q.dequeue();
    q.dequeue();
    cout<<q.isFull();

}