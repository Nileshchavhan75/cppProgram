#include<iostream>
using namespace std;

class Stack{
    int *array;
    int size;
    int top;

    public:
        Stack(int s){
            size = s;
            top = -1;
           array = new int[s];
        }
        void push(int value){  
            if(top == size - 1){
                cout<<"Stack overflow: "<<endl;
                return;
            }else{
                top++;
                array[top] = value;
                cout<<"Pushed value: "<<value<< " into the stack"<<endl;
            }
        }
        void pop(){
            if(top == -1){
                cout<<"Stack underflow: "<<endl;
                return;
            }else{
               cout<<"Poped "<<array[top]<<" from the stack";
               top--;
            }
        }
        void peek(){
            if(top == -1){
                cout<<"Stack is empty: ";
                return;
            }else
            {
                cout<<array[top];
            }
       }
       bool Empty(){
        return top == -1;
       }
       int Size(){
        return top + 1;
       }
};

int main(){
    Stack s(5);
    s.push(45);
    s.push(56);
    s.push(70);
    s.push(44);
    cout<<endl;
    s.pop();
    cout<<endl;
    cout<<s.Size();
   
}
