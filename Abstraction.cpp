#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Circle circle;
    Square square;
    circle.draw();  // Outputs: Drawing Circle
    square.draw();  // Outputs: Drawing Square
    return 0;
}
