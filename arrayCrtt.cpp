#include<iostream>
using namespace std;

int main(){
    string s1[] = {"a", "b", "c", "d"};
    string s2[] = {"w", "x", "y", "z"};
    string s3[8]; 

    int index = 0;
    
    for(int i = 0; i < 4; i++){ 
        s3[index++] = s1[i];  
        s3[index++] = s2[i];  
    }

    for(int i = 0; i < 8; i++){ 
        cout << s3[i]<<", ";
    }

    return 0;
}