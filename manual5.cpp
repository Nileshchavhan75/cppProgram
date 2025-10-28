#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        Rectangle(int l, int b){
         length  = l;
         breadth = b;
        }
        friend int calculateArea(Rectangle r);
};
int calculateArea(Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    Rectangle rect(10, 5);
    cout << "The area of the rectangle is: " << calculateArea(rect) << endl;
    
    return 0;
}
