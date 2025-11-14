// #include<iostream>
// using namespace std;
// int main(){
//     int arr[11] = {11,22,44,44,44,44,44,88,99,111,124};
//     int size = sizeof(arr)/ sizeof(arr[0]);
//     int target = 44;
//     int start = 0, end = size -1;
//     int first = -1, last = -1;

//     while (start <= end)
//     {
//         int min = start + (end - start)/2;
//         if(arr[min] == target){
//             first = min;
//             end = min -1;
//         }else if(arr[min]<target){
//             start = min +1;
//         }else{
//             end = min -1;
//         }
//     }

//     start = 0, end = size-1;
//     while (start <= end)
//     {
//         int min = start +(end - start)/2;
//         if(arr[min]==target){
//             last = min;
//             start = min +1;
//         }else if(arr[min]<target){
//             start=min +1;
//         }else{
//             end = min -1;
//         }
//     }
//     cout<<"Fisrt occurs: "<<first<<endl;
//     cout<<"last occuresL "<<last;
//     return 0;

    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[100];
//     int size;
//     cout<<"Enter the size of array: ";
//     cin>>size;

//     for(int i = 0; i<size; i++){
//         cin>>arr[i];
//     }
//     for(int i = size -2; i>=0; i--){
//         bool flag = false;
//         for(int j = 0; j<=i; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 flag = true;
//             }
//         }
//         if(flag == false){
//             break;
//         }

//     }
//     for(int i = 0; i < size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[50];
//     int size;
//     cout<<"Enter the size of array: ";
//     cin>>size;

//     for(int i = 0; i<size; i++){
//         cout<<"Enter Element that we will be soreted: "<<i + 1;
//         cin>>arr[i];
//     }

//     int target;
//     cout<<"Enter the Target Element that you want to find in the array: ";
//     cin>>target;

//     int start = 0, end = size-1;

//     while (start<=end)
//     {
//         int mid = start+(end-start)/2;
//         if(arr[mid]<target){
//             start = mid +1;
//         }else if(arr[mid]>target){
//             end = mid - 1;
//         }else{
//             cout<<"Element found at index: "<<mid<<endl;
//             return 0;
//         }
//     }

//     cout<<"Element doesn't exit in index: "<<endl;
//     return 0;   
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[15] = {11,22,33,44,44,44,44,44,44,44,44,55,55,55,66};
//     int size = sizeof(arr)/ sizeof(arr[0]);
//     int target = 55;
//     int start = 0, end = size -1;
//     int first = -1, last = -1;
//     while(start<=end){
//         int mid = start+(end-start)/2;
//         if(arr[mid]==target){
//             first = mid;
//             end = mid-1;
//         }else if(arr[mid]<target){
//             start = mid+1;
//         }else{
//             end = mid-1;
//         }
//     }

//     start = 0, end = size -1;
//     while(start<=end){
//         int mid = start+(end-start)/2;
//         if(arr[mid] == target){
//             last = mid;
//             start = mid + 1;
//         }else if(arr[mid]<target){
//             start = mid +1;
//         }else{
//             end = mid -1;
//         }
//     }

//     cout<<"First occur at position: "<<first<<endl;
//     cout<<"Last occur at position: "<<last;
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10] = {1,2,3,4,4,4,4,4,4,4};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int search = 4;
//     int count = 0;
//     for(int i = 0; i<size; i++){
//         if(arr[i]==search){
//             count++;
//         }
//     }
//     cout<<"Total count: "<<count<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int arr[15] = {1,2,3,4,5,6,6,6,6,6,7,8,9,10,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 6;
    int start = 0, end = size -1;
    int first = -1, last = -1;

    while (start<=end)
    {
        int mid = start +(end - start)/2;
        if(arr[mid]==target){
            first = mid;
            end = mid -1;
        }else if(arr[mid]<target){
            start = mid +1;
        }else{
            end = mid -1;
        }
    }

    start = 0, end = size -1;
     while (start<=end)
    {
        int mid = start +(end - start)/2;
        if(arr[mid]==target){
            last = mid;
            start = mid + 1;
        }else if(arr[mid]<target){
            start = mid +1;
        }else{
            end = mid -1;
        }
    }

    int count = (last - first) + 1;
    cout<<target <<" found "<<count<<" time in array"<<endl;
    return 0;

}
