#include<iostream>
using namespace std;
class Stack{
    string *arr;
    int size;
    int top;
    
    public:
        Stack(int s){
        size = s;
        top = -1;
        arr = new string[s];      
        }
        void push(string value){
            if(top == size -1){
                cout<<"Stack is overflow";
            }else{
                top++;
                arr[top] = value;
                cout<<"Name is pushed in stack: "<<arr[top]<<endl;
            }
        }

        void pop(){
            if(top == -1){
                cout<<"Stack underflow: "<<endl;
            }else{
                cout<<"String poped from "<<arr[top]<<" Stack"<<endl;
                top--;
            }
        }
        void peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Top element of the stack: " << arr[top] << endl;
        }
    }

};
int main(){
    Stack s(5);
    s.push("Apple");
    s.push("tomatto");
    s.pop();
}
