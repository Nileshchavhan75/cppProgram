#include<iostream>
using namespace std;
#define MAX 5
class Queue
{
	int front, rear, arr[MAX];
	public: 
	Queue()
	{
		front = rear = -1;
	}
	void Enqueue(int);
	void Dequeue();
	void Display();
};
void Queue :: Display()
{

	if(front==-1 || rear<front)
	{
		cout<<"Queue is Underflow.. "<<endl;
		return;
	}
	cout<<" Queue :: ";
	for(int i=front; i<=rear; ++i)
	{
		cout<<arr[i]<<"\t";
		//cout<<endl;
	}
}
void Queue :: Dequeue()
{

	if(front==-1 || rear<front)
	{
		cout<<"Queue is underflow.. "<<endl;
		return;
	}
	int item = arr[front];
	cout<<item<<" is removed from th Queue.."<<endl;
	++front;
	return;
}
void Queue :: Enqueue (int element)
{
	if(rear==MAX-1)
	{
		cout<<"Queue is overflowed.. "<<endl;
		return;
	}
	if(front==-1)
	{
		front=0;
	}
	++rear;
	arr[rear] = element;
	cout<<"\n"<<element<<" Inserted into Queue.. "<<endl;
	return;
}


int main()
{
	int choice, item;
	Queue q;
    while(1)
    {
    cout<<"Enter number as per your choice: "<<endl;
    cout<<"1.Enqueue: \n";
    cout<<"2.Dequeue: \n";
    cout<<"3.Display: \n";
	cout << "4. Exit" << endl;
    cin>>choice;
    
    switch (choice)
    {
    case 1: cout<<"enter the element: ";
            cin>>item;
            q.Enqueue(item);
             break;  
    case 2: q.Dequeue();
            break;
    case 3: q.Display();
            break;
    case 4: cout << "Exiting program..." << endl;
            exit(0);
    default: cout<<"please enter valid number: "<<endl;
        break;
    }
    } 
     return 0;
}