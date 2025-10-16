#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,4,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 4;
    int start = 0;
    int end = size -1;
    int first = -1;
    int last = -1;


    while (start<=end)
    {
        int mid = start+(end - start)/2;
        if(arr[mid] == target){
            first = mid;
            end = mid - 1;
        }else if(arr[mid]<target){
            start = mid + 1;
        }else{
            end = mid -1;
        }
    }
  
    start = 0; end = size -1;
    while (start<=end)
    {
        int mid = start+ (end - start)/2;
        if(arr[mid] == target){
            last = mid;
            start = mid +1;
        }else if(arr[mid]<target){
            start = mid + 1;
            
        }else{
            end = mid -1;
        }
    }
    cout<<"first occurs at index: "<<first<<endl;
    cout<<"last occurs at index: "<<last;

}