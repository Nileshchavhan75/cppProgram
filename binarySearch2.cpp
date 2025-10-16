#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    for(int i = 0; i<size; i++){
        cout<<"Enter Element "<<i + 1<<" :";
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the number you want to search: ";
    cin>>target;

    int start = 0; 
    int end = size -1;

    while (start<= end)
    {
        int mid = (start+end)/2;
        if(arr[mid] < target){
            start = mid +1;
        }else if(arr[mid]> target){
            end = mid -1;
        }else{
            cout<<"Element found at index: "<<mid;
            return 0;
        }
    }
    cout<<"Element doesn't found in given array"<<endl;
    return 0;
    
}