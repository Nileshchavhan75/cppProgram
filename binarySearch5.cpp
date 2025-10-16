// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10] = {11,12,13,15,16,17,18,19,20,21};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int start = 0, end = size -1;
//     int target = 14;
//     int ans = size;



//     while (start<=end)
//     {
//         int mid = start+(end-start)/2;
//         if(arr[mid]>=target){
//             ans = mid;
//             end = mid -1;
            
//         }else{
//             start = mid +1;
//         }
//     }
//     cout<<target<<" value comes at this index in the array: "<<ans<<endl;
//     return 0;

// }
#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int size, target;
    cout<<"Enter the size of an array: ";
    cin>>size;
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the target value: ";
    cin>>target;
    int start = 0, end = size -1;
    int ans = size;

    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid]>=target){
            ans = mid;
            end = mid -1;
        }else{
            start = mid +1;
        }
    }

    cout<<target<<" :Value comes at this position: "<<ans<<endl;
    return 0;
}
