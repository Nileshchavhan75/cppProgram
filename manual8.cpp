#include <iostream>
using namespace std;

// Abstract base class Shape
class Shape {
public:
    // Pure virtual functions
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    virtual ~Shape() {
        cout << "Shape destructor called" << endl;
    }
};

// Derived class for Circle
class Circle : public Shape {
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14 * radius * radius;
    }

    double perimeter() const override {
        return 2 *  3.14 * radius;
    }

    ~Circle() {
        cout << "Circle destructor called" << endl;
    }
};

class Square : public Shape {
    double side;

public:
    Square(double s) : side(s) {}

    double area() const override {
        return side * side;
    }

    double perimeter() const override {
        return 4 * side;
    }

    ~Square() {
        cout << "Square destructor called" << endl;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(5);       
    shapes[1] = new Square(4);       
    for (int i = 0; i < 2; i++) {
        cout << "Shape " << i + 1 << ":\n";
        cout << "Area: " << shapes[i]->area() << "\n";
        cout << "Perimeter: " << shapes[i]->perimeter() << "\n\n";
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }

    return 0;
}
