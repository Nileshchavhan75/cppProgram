#include<iostream>
using namespace std;
int main(){
    int array[7] ={10,15,22,33,45,46,51};
    int target = 45;

    int st = 0; 
    int end = 6;


    while (st <= end)
    {
        int mid =(st + end) /2;

        if(target > array[mid]){
            st = mid + 1;
        }else if(target < array[mid]){
            end = mid - 1;
        }else {
            cout<<"element found: "<<mid<<endl;
            return 0;
        }
    }
    cout<<"Element not found in the array. "<<endl;
}