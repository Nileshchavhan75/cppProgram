#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int size;
    cout<<"Enter the array size: ";
    cin>>size;

    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the number you want to search: ";
    cin>>target;

    int start = 0;
    int end = size -1;
    int first = -1, last = -1;

    while (start<=end)
    {
        int mid = start+(end - start)/2;
        if(arr[mid]==target){
            first = mid;
            end = mid-1;
        }else if(arr[mid]<target){
            start = mid +1;
        }else{
            end = mid -1;
        }    
    }
    start = 0, end = size -1;

    while (start<=end)
    {
        int mid = start+(end - start)/2;
        if(arr[mid]==target){
            last = mid;
            start = mid+1;
        }else if(arr[mid]<target){
            start = mid +1;
        }else{
            end = mid -1;
        }
    }

    cout<<"First occurs in array: "<<first<<endl;
    cout<<"last occurs in array: "<<last;
}