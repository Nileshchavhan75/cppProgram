#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream inf;
    inf.open("data.txt");  
    if (!inf) {  // Check if the file was opened successfully
        cout << "File could not be opened!" << endl;
        return 1;
    }
    
    string str;
    int c = 0;

    while(inf.eof()){
        c++;
        getline(cin, str);
        cout<<str;
    }
    
    inf.close();  

    return 0;
}
