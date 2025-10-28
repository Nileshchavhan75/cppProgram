#include<iostream>
using namespace std;
int main(){
  int a = 6;
  char ch = 'A';
  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= i; j++)
    {
        cout<<ch<<" ";
        ch += 1;
    }
    cout<<endl;
  }
  return 0;
  
};