#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = size-1;
    int key = 3;
    while (start<=end)
    {
        int mid = (start+end)/2;
        if(arr[start]<arr[mid]){
            start = mid +1;
        }else if (arr[mid]> arr[end])
        {
            end = mid - 1;
        }else{
            cout<<"Element found at index: "<<mid<<endl;
            return 0;
        }
        
    }

    cout<<"Element not found"<<endl;
    
}