#include<iostream>
using namespace std;
class Stack{
    int size;
    int top;
    int *array;

    public:
    Stack(int x){
        size = x;
        top = -1;
        array = new int[x];

    }
    void push(int);
    void pop();
    void display();
    void peek();

    ~Stack(){
        delete[] array;
    }
};
void Stack::push(int x){
    if(top == size -1){
        cout<<"Stack is overflow"<<endl;
        return;
    }else{
        top++;
        array[top] = x;
        cout<<"Element added in stack: "<<x<<endl;
    }
}

void Stack::pop(){
    if(top == -1){
        cout<<"Stack is underflow"<<endl;
        return;
    }else{
        cout<<array[top]<<" Element remove from Stack"<<endl;
        top--;
    }

}

void Stack::display(){
    if(top == -1){
        cout<<"Stack is Empty"<<endl;
    }

    for(int i = top; i >= 0; i--){
        cout<<array[i]<<" ";
    }
}
void Stack::peek(){
    if(top == -1){
        cout<<"Stack is Empty: "<<endl;
        return;
    }else{
        cout<<"Top element of the stack: "<< array[top]<<endl;
    }
}
int main(){
    int x = 5;
    cout<<"Enter the size of Stack: "<<endl;
    cin>>x;
    
    Stack s(x);
    while (1)
    {   
        int item, choice;
        cout<<"Enter the the number: "<<endl;
        cout<<" 1: Enter the element: "<<endl;
        cout<<" 2: For remove the Elemnet: "<<endl;
        cout<<" 3: to Display the element: "<<endl;
        cout<<" 4: for exit: "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1: cout<<"Enter the element: ";
                cin>>item;
                s.push(item);
            break;
        case 2: s.pop();
            break;
        case 3: s.display();
            break;
        case 4: cout<<"your are exits from the code";
              exit(0);        
        default:cout<<" Namste: ";
            break;
        }

    }
    
    
    

    

}