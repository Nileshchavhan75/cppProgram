#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream oin;
    oin.open("data.txt");
    int count = 0;
    char c;
    while (oin.get(c))
    {
        count++;
    }
    cout<<"the total number of charactor: " <<count;
    oin.close();
    
}
