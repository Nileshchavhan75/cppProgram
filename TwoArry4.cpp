#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {
        {5, 10, 15},
        {5, 10, 15},
        {5, 10, 55}
    };
    int sum =0;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(arr[i] == arr[j]){
                sum += arr[i][j];
            }
        }
    }
    cout<<"Sum: "<<sum;
}