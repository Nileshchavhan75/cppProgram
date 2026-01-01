#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

    bool anagram(string s,string s2){
        sort(s.begin(),s.end());
        sort(s2.begin(),s2.end());

        if(s == s2){
            return true;
        }
        return false;

    }
int main(){
    string s = "listen";
    string s2 = "silent";

    cout<<"is String is Anagram: "<<anagram(s,s2);
    return 0;

}