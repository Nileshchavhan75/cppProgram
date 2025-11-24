#include<iostream>
using namespace std;
class Stack{
    int *array;
    int size;
    int top;
    
    public:
        Stack(int a){
            size = a;
            top = -1;
            array = new int[a];
        }



    void push(int ele){
        if(top == size-1){
            cout<<"Stack is full"<<endl;
        }else{
            top++;
            array[top] = ele;
            cout<<ele<<" inserted int Stack: "<<endl;
        }

    }

    void pop(){
        if(top == -1){
            cout<<"Stack is underflow"<<endl;
        }else{
            cout<<array[top]<<" element remove from the stack: "<<endl;
            top--; 
        }
    }

    void display(){
        for(int i = 0; i <size; i++){
            cout<<array[i]<<" ";

        }
    }

    
};
int main(){
    Stack s(5);
    s.push(15);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(55);
    s.push(5);

    s.display();
    cout<<endl;
    
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    s.pop();


}