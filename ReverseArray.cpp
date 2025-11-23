#include<iostream>
using namespace std;
int ReverseArray(int array[], int size){
    int start = 0; int end = size - 1;
    while (start < end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
    

}
int main(){
    int array[]= {4,5,2,5,6,3,};
    int size = 6;
    ReverseArray(array, size);

    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    //cout<<endl;
    return 0;
    
}