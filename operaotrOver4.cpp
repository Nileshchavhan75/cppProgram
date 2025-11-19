#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x = 0, int y = 0) : x(x), y(y) {}
    Point operator+(const Point& p) {
        Point temp;
        temp.x = this->x + p.x;  
        temp.y = this->y + p.y;
        return temp;
    }

    void display() {
        cout<< x << ", " << y << endl;
    }
};

int main() {
    Point p1(1, 2);  
    Point p2(3, 4);
    Point p3(5, 6); 

    Point temp = p1 + p2+ p3;  
    
    // Second: temp + p3 is computed
    //Point result = temp + p3;  // Result: (4 + 5, 6 + 6) => (9, 12)

    cout << "Result of p1 + p2 + p3: "<<endl;
    temp.display();
    return 0;
}
