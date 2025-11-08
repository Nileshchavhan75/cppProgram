#include<iostream>
using namespace std;
int main(){
   int n =5;
    int fact = 1;
   for (int i = 1; i <=n; i++){
    fact *= i;
    

   }
   cout << fact ;
   cout<< endl;
   return 0;
}