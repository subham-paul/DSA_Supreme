#include <iostream>
using namespace std;

class Animal {
    int age;

public:

    // Destructor syntax
    ~Animal() { 
        cout << "Destructor called" << endl;
    }
};

int main() {

    Animal suresh;               // Static allocation -> Automatically calls the destructor
    Animal *ramesh = new Animal; // Dyanamic allocation
    delete ramesh;               // Manually deletion

    return 0;
}