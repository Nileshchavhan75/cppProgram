#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3]= {
        {5, 10,15},
        {6, 11,17},
        {7,13,19}
    };
    int arr2[2] [2] = {
        {7,11},
        {8,12}
    };

    int max = -1;
    int min = INT_MAX;

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            if(arr[i][j]>max);
            max = arr[i][j];
        }
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            if(arr2[i][j]<min){
                min = arr2[i][j];
            }
        }
    }
    cout<<"Max form arr1: "<<max<<endl;
    cout<<"Min from arr2: "<<min;
    
}
