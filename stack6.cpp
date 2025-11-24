#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;

    public:
        Stack(int x){
            size = x;
            top = -1;
            arr = new int[x];

        }

    void push (int ele){
        if(top == size -1){
            cout<<"Stack is overflow";
        }else{
            top++;
            arr[top] = ele;
            cout<<ele<<" value is inserted"<<endl;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is underflow"<<endl;
        }else{
            cout<<arr[top]<<" is remove from the stack "<<endl;
            top--;
        }
    }

    void start(){
        cout<<arr[top]<<" top value from the Stack: "<<endl;
    }
};
int main(){
    Stack s(5);
    s.push(45);
    s.push(46);
    s.push(40);
    s.push(46);
    s.push(75);
    s.push(70);
    cout<<endl;
    s.pop();
    s.start();
    s.pop();
    s.pop();
    

}