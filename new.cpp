#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter your marks ";
    cin >> marks;
    if (marks >= 90)
    {
        cout<<"Grade A \n";
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "Grade B \n";
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "Grade C \n";
    }
    
    
    
       return 0;
}