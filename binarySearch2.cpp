#include<iostream>
using namespace std;
int main(){
    int arr[8] = {5, 8, 12, 15, 18, 22, 30, 35};
    int target = 18;

    int st = 0;
    int end = 7;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if(target < arr[mid]){
            end = mid - 1;
        }else if(target > arr[mid]){
            st = mid + 1;
        }else{
            cout<<"Number fount at index: "<<mid<<endl;
            return 0;
        }
        //cout<<"Number is not found: "<<endl;
    }
    
    }