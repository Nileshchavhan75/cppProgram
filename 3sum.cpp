#include<iostream>
#include<algorithm>
using namespace std;
bool threeSum(int arr[], int tar, int s){
    sort(arr, arr + s); 
    for(int i = 0; i<s-2; i++){
        int ans = tar-arr[i];
        int start = i+1, end = s-1;
        while (start<end)
        {
            if(arr[start] + arr[end] == ans){
                return true;
            }else if(arr[start] + arr[end] > ans){
                end--;
            }else{
                start++;
            }
        }
        
    }
    return false;
}
int main(){
    int arr[5] = {5,6,7,8,9};
    int n = 5;
    int target = 20; 
    cout<<threeSum(arr,target,n);
    return 0;
}