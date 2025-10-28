 #include<iostream>
 using namespace std;
 class person{
    string name;
    int age;
    string address;
public:
  void setdata(){
      cout<<"Enter your name: ";
      cin>>name;
      cout<<"Enter your age: ";
      cin>>age;
      cout<<"Enter address: ";
      cin>>address;
  }
  void dispay(){
      cout<<"Name: "<<name<<endl;
      cout<<"age: "<<age<<endl;
      cout<<"address: "<<address;
  }
};
int main(){
    person p;
    p.setdata();
    p.dispay();
    return 0;
}
    
    
    

