#include<iostream>
using namespace std;
    int linearSearch(int array[], int size, int target){
        for(int i = 0; i < size; i++){
            if(array[i]==target){
                return i;
            }
        }
        return -1;
    }
int main(){
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(array)/ sizeof(array[0]);

    int target;
    cout<<"Enter the element you want to search: ";
    cin>>target;
    int result = linearSearch(array, size, target);
    if(result != -1){
        cout<<"Element found at index: "<<result<<endl;
    }else{
        cout<<"Element does not present in the array: "<<endl;
    }
    return 0 ;

}