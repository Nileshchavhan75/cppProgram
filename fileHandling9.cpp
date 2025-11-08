#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("newData.txt");
    if(!fout.is_open()){
        cout<<"Error occur to opening file";
        return 1;
    }
    string name;
    int n;
    cout<<"Enter the Number of data you want to insert: ";
    cin>>n;

    for(int i = 1; i<= n; i++){
        cin.ignore();
    cout<<"Entering data"<<endl;

    cout<<"Enter "<< i <<" student details"<<endl;
    cout<<"Enter the Name of Student: ";
    cin>>name;

    fout<<"Name of Student: "<<name<<endl;

    int roll_no;
    while (true)
    {
        cout<<"Enter Roll Number: ";
        cin>>roll_no;
        if(roll_no > 0){
            fout<<"Roll Number: "<<roll_no<<endl;
            break;
        }else{
            cout<<"Enter valid Roll Number";
        }
    }
    
    }
    fout.close();
    cout<<"Data inserted succufully"<<endl;


    ifstream inf("NewData.txt");

    if(!inf.is_open()){
        cout<<"File opening error";
        return 1;
    }

    string line;
    while (getline(inf,line))
    {
        cout<<line<<endl;
    }
    inf.close();
    
}