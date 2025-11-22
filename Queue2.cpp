#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int size;
    int front, rear;

    public:
        Queue(int n){
            size = n;
            front = rear = -1;
            arr = new int[n];
        }

        bool isEmpty(){
            return front == -1;
        }

        bool isFull(){
            return rear == size -1;
        }

        void enqueue(int x){
            if(isEmpty()){
               front = rear = 0;
               arr[rear] = x; 
               cout << x << " inserted into the Queue." << endl;
            }
            else if (isFull())
            {
                cout<<"Queue is overflow: "<<endl;
                return;
            }else{
                rear = rear + 1;
                arr[rear] = x;
                cout<<x<<"  insert into the Queue:  "<<endl;
            }
        }

        void dequeue(){
            if (isEmpty())
            {
                cout<<" Queue is underflow: "<<endl;
                return;

            }else{
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
    q.enqueue(55);
    q.enqueue(56);
    q.enqueue(46);
    cout<<endl;

    q.dequeue();
    q.dequeue();
     return 0;

}