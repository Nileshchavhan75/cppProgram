#include<iostream>
using namespace std;
class Stack{
    int *array;
    int top;
    int size;

    public:
        Stack(int s){
         size = s;
         top  = -1;
        array = new int[s];
        }
        void push(int);
        void pop();
        void peek();
};
void Stack::push(int value){
    if(top == size -1){
        cout<< "Stack is overFlow "<<endl;
        return;
    }else{
        top++;
        array[top] = value;
        cout<<value<<" Inserted into stack"<<endl;
    }
}
void Stack::pop(){
    if(top == -1){
        cout<<" Stack is underflow"<<endl;
        return;
    }else{
        cout<< array[top]<<" Element pop from the stack"<<endl;
        top--;
    }
}
void Stack::peek(){
    if(top == -1){
        cout<<" Stack id empty";
        return;
    }else{
        cout<<array[top]<<" peek element of the Stack"<<endl;
    }
}
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();
    s.peek();
}
