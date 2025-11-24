#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;

    public: 
        Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
        }

        void push(int value){
            if(top == size -1){
                cout<<"Stack is overflow: "<<endl;
                return;
            }else{
                top++;
                arr[top] = value;
                cout<<"Value is inserted in stack: "<<value;
                cout<<endl;

            }
        }
        
        void pop(){
            if(top == -1){
                cout<<"Stack is underflow "<<endl;
                return;
            }else{
                cout << "Popped element: " << arr[top] << endl;
                top--;

            }
        }

        void peek(){
            if(top == -1){
                cout<<"Stack is empty: "<<endl;
            }else{
                cout<<arr[top];
            }
        }

        void display(){
            for(int i =0; i<=top; i++){
                cout<<arr[i]<<" ";
            }
        }
            
        
    };
    int main(){
        Stack s(5);
        s.push(4);
        s.push(10);
        s.push(15);
        s.push(45);
        s.push(50);

        s.display();
        cout<<endl;
        cout<<endl;

        s.peek();
    }
