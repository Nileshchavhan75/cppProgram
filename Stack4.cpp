#include<iostream>
using namespace std;
class Stack{
    char *arr;
    int size;
    int top;

    public:
        Stack(int n){
            size = n;
            top = -1;
            arr = new char[n];
        }
       void push(char ch){
            if(top == size -1){
                cout<<"Stack is overflow: ";
            }else{
                arr[++top] = ch;
            }
        }
       char pop(){
        if(top == -1){
            cout<<"Stack is underflow: ";
        }else{
            //cout<<"Char pop from the Stack: ";
            return arr[top--];
        }
       } 

       bool isEmpty(){
        return top == -1;
       }

};
       void reversesss(string str){
        Stack s(str.length());

        for(char ch : str)
        s.push(ch);

        string revser_str;

        while(!s.isEmpty()){
            revser_str += s.pop();
        }
        cout<<"Original string: "<<str<<endl;
        cout<<"After doing Operation: "<<revser_str<<endl;
       }
int main(){
    string name = "Shivay";
    reversesss(name);

    
}