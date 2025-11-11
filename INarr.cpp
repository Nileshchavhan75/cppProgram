#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the size of array: ";
    cin>>n;
    int marks [n];
    cout<<"Enter the "<<n<<" marks: ";
    for (int i = 0; i < n; i++)
    {
        cin>>marks[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<marks[i]<<endl;
    }
    return 0;
}