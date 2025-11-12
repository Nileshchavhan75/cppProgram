#include<iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5,6,7,8,10};
    int size = 9;
    int sum = 0;
    for(int i =0; i < size; i++){
        sum+=array[i];
    }

    int n = 10; 
    int asum = (n * (n + 1)) / 2;
    int missing_number = asum -sum;
    cout<<missing_number<<endl;
    return 0; 

}

