#include<iostream>
using namespace std;
void Details(string name, string city = "Kurha", int age = 25){
    cout<<"Name is: "<<name<<endl;
    cout<<"city: "<<city<<endl;
    cout<<"age: "<<age<<endl;
}
int main(){
    Details("Nilesh");
    Details("Nilesh", "Khujgoan");
    Details("Shivay","Sangali", 21);
    return 0;
}