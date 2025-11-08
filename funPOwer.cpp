#include <iostream>
using namespace std;
int main(){
    int exp = 3;
    int base = 4;
     int result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
}
cout<<result;
}