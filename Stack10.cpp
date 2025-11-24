#include<iostream>
using namespace std;
class Stack{
    int *array;
    int top;
    int size;

    public:
        Stack(int s){
            size = s;
            top = -1;
            array = new int[s];
        }
    void push(int);
    void pop();
    void peek();
    void display();
};

void Stack::push(int element){
    if(top ==  size-1){
        cout<<" Stack is overflow"<<endl;
        return;
    }else{
        top++;
        array[top] = element;
        cout<<array[top]<<" Element added to the Stack:"<<endl;
    }
};

void Stack::pop(){
    if(top == -1){
        cout<<" Stack is underflow"<<endl;
        return;
    }else{
        cout<<array[top]<<" element remove from the stack: "<<endl;
        top--;
    }
};

void Stack::peek(){
    if(top == -1){
        cout<<" Stack is underflow"<<endl;
        return;
    }else{
        cout<<" Top element of the Stack is: "<<array[top]<<endl;
    }
};
void Stack::display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    } else {
        cout << "Stack elements from top to bottom: ";
        for (int i = top; i >= 0; i--) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    Stack s(5);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);

    s.pop();
    s.pop();
    s.peek();

    s.display();
    

}