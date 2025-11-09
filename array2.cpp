#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num [5] = {10, 25, 3, 5, 66};
    cout<<sizeof(num)<<endl;
    int largest = INT_MIN;
    int largestInx = 1;
    for(int i = 0; i <= 5; i++ ){
        if(num[i] > largest ){
            largest = num[i];
            largestInx = i;
        }
    }
    cout<<"largest: "<< largest<<endl;
    cout<<"Index of largest value: "<<largestInx<<endl;
    return 0;
}
