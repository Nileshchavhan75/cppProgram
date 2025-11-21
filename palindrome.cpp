// #include<iostream>
// using namespace std;
// int main(){
//     int n, sum = 0, r, temp;
//     cout<<"Enter number: ";
//     cin>>n;
//     temp = n;
//     while (n>0)
//     {
//         r = n % 10;
//         sum = (sum * 10) + r;
//         n = n / 10;
//     }
//     if(sum == temp){
//         cout<<"Palindrom";
//     }else{
//         cout<<"Not polindrome";
//     }

//     return 0;
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter n: ";
//     cin>>a;
//     char c = 65;
//     for(int i = 0; i<a; i++){
//         for (int j = 0; j <=i; j++)
//         {
//             cout<<c;
//             c++;
//         }
//         cout<<endl;
        
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int n = 1;
//     for(int i = 1; i<=5; i++){
//         for(int j = 5; j>=6-i; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// } 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    for(int i = 1; i<n; i++){
        for(int j = 1; j<n-i; j++){
            cout<<"  ";
        }
        for(int j = 1; j<= i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}