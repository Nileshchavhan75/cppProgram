#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter the "<<n<<" of array: ";
    //int size = 5;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    int smallest = INT_MAX;
    int index ;
    for (int i = 0; i < n; i++)
    {
        if(array[i] < smallest){
            smallest = array[i];
            index = i;
        }
    }
    cout<<"Smallest: "<<smallest<<endl;
    cout<<index;
    
}