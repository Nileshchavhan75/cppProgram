#include <iostream>
using namespace std;
void PersonDetails(string name, int age = 18, string city = "New York") {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
}
int main() {
    PersonDetails("Alisa", 25, "Mumbai");
    PersonDetails("Shivay", 24);
    PersonDetails("Arya");
    return 0;
}
