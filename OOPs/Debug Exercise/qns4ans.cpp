#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle: public Shape {
public:
    void draw(int radius) {
        cout << "Drawing a circle with radius " << radius << endl;
    }
};

int main() {
    Circle c;
    c.draw(5); // any value should be provided
    return 0;
}
