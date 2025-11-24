#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[] ={12,3,4,-3,-13};
    int size = 5;
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            
        }
        
    }
    cout<<"smallest value is: "<<smallest;
    cout<<endl;
    return 0;
    
}