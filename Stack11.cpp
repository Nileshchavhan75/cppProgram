#include<iostream>
using namespace std;
class Stack{
    int *array;
    int top;
    int size;
    public:
    Stack(int x){
        size = x;
        top = -1;
        array = new int[x];
    }
    void push(int);
    void pop();
    void peek();
    void display();
};
void Stack::push(int key){
    if(top == size -1){
        cout<<" Stack overflow"<<endl;
        return;
    }else{
        top++;
        array[top] = key;
        cout<<array[top]<<" Element inserted into Stack"<<endl;
    }
}
void Stack::pop(){
    if(top == -1){
        cout<<" Stack is Underflow"<<endl;
        return;
    }else{
        cout<<array[top]<<" Remove form the Stack"<<endl;
        top--;
    }
}
void Stack::peek(){
    if(top == -1){
        cout<<"Stack is Empty"<<endl;
        return;
    }else{
        cout<<array[top]<<" :Top Element from the Stack"<<endl;
    }
}
void Stack::display(){
    if(top == -1){
        cout<<" Stack is Empty now"<<endl;
        return;
    }
    for(int i = top; i >=0; i--){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();

    cout<<endl;
    cout<<endl;

    s.pop();
    s.pop();
    s.display();
    
    cout<<endl;
    cout<<endl;
    s.peek();
    

}