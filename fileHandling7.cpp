#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;
int main(){
    ifstream fin;
    ofstream fout;
    fin.open("data.txt");
    fout.open("output.txt");

    char ch;
    while(fin.get(ch)){
        if (isdigit(ch)){
             fout.put('*');
        }else if (isalpha(ch)) {
            if (islower(ch)) {
                fout.put(toupper(ch));
            } else {
                fout.put(tolower(ch));
            }
        } else {
            fout.put(ch);
        }
        
    }
     fin.close();
     fout.close();
       
    }
