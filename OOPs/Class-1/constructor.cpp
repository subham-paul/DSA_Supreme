#include <iostream>
using namespace std;

class Animal {
    int age;
    int weight;

public:

    // default constructor
    Animal() {
        cout << "Default constructor called" << endl;
    }

    // parameterized constructor
    Animal(int age) {
        this->age = age; // for good practice using this pointer
        cout << "Parameterized constructor called" << endl;
    }

    Animal(int age, int weight) {
        this->age = age; // for good practice using this pointer
        this->weight = weight;
        cout << "Parameterized constructor 2 called" << endl;
    }

    // Copy constructor
    Animal(Animal &obj) {
        this->age = age;
        cout << "Copy constructor called";
    }
};

int main() {
    Animal suresh;       // Default constructor
    Animal* b = new Animal(20, 200);
    Animal ramesh(30);   // Parameterized constructor
    Animal copy(suresh); // Copy constructor
    return 0;
}