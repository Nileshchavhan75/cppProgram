#include<iostream>
using namespace std;
int linerSarch(int aar[], int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (aar[i] == target)
        {
            return i;
        }
        
    }
    return -1;
}
int main(){
    int aar[] = {2,12,8,6,6,6,123};
    int size = 7;
    int target = 123;
    cout<<linerSarch(aar, size, target)<<endl;
    
}