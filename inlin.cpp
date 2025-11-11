#include<iostream>
using namespace std;
inline int square(int x){
    return x * x;
}
int main(){
    int sum = 5;
    cout<<"square of: "<<sum<<" is "<<square(sum)<<endl;
    return 0;
}