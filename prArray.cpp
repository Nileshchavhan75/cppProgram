#include<iostream>
using namespace std;
void ReverseArray(int array[], int size){
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }   
}
int main(){
int array[] = {45 ,10, 45,20, 45};
int size = 5;
for (int i = 0; i < size; i++)
{
    cout<<array[i]<<" ";
}
cout<<endl;

ReverseArray(array, size);
for (int i = 0; i < size; i++)
{
    cout<<array[i]<<" ";
}


return 0;
}