#include<iostream>
using namespace std;
int main(){
    int array[10] = {1,5,6,4,3,2,8,9,10};

    int sum = 0;
    for(int i = 0; i<9; i++){
        sum+=array[i];
    }
    int n = 10;
    int msum = (n *(n + 1)/2);
    int missing_number = msum - sum;
    cout<<"Missing number in Array: "<<missing_number<<endl;

    return 0;
}