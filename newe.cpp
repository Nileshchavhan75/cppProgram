#include <iostream>
using namespace std;

class Example {
    mutable int counter; // Declared mutable so it can change in const function

public:
    Example() : counter(0) {}

    void incrementCounter() const {
        counter++; // Allowed even though the function is const
    }
    void incrementCounter2() const {
        counter++; // Allowed even though the function is const
    }


    int getCounter() const {
        return counter;
    }
};

int main() {
    const Example obj; // obj is const
    obj.incrementCounter(); // Still allowed because counter is mutable
    cout << "Counter: " << obj.getCounter() << endl; // Outputs: Counter: 1
}
//create an abstract class shape derived two classes tranangle and circle from it and calculate the area of both use method overriding 
//ause that there is part in mashion having three side mesurement s1,s2,s3 it's inner and outer valume are calculated, using following formula define a class called part and counstruct and object and display it use an interface called valum
//write a java program for packege games which have two classes indoor outdoor use function display to generate the list of players use default and paramiterized constructor 
//ctrate a packege a packege mca which will have two classes ass class mathematics with method to add two integer numbers and three float numbers and make another class maximum with method to find maximum of three number 