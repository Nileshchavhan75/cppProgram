#include<iostream>
using namespace std;
int main(){
    int array[5] = {10, 20, 30, 40,50};
    int index = -1;
    int a = 40;
    for(int i = 0; i < 5; i++){
        if(a == array[i]){
            index = i;
            break;
        }
    }
    cout<<" The index of the number that is equal to: "<<index<<endl;
    return 0;
}