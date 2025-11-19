#include<iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    friend Point operator+(const Point& p1, const Point& p2);

    friend Point operator-(const Point& p1, const Point& p2);

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
Point operator+(const Point& p1, const Point& p2) {
    Point temp;
    temp.x = p1.x + p2.x;
    temp.y = p1.y + p2.y;
    return temp;
}
Point operator-(const Point& p1, const Point& p2) {
    Point temp;
    temp.x = p1.x - p2.x;
    temp.y = p1.y - p2.y;
    return temp;
}

int main() {
    Point p1(7, 5); 
    Point p2(3, 2); 
    Point p3 = p1 + p2; 
    Point p4 = p1 - p2; 

    cout << "Result of p1 + p2: ";
    p3.display();  

    cout << "Result of p1 - p2: ";
    p4.display(); 

    return 0;
}
