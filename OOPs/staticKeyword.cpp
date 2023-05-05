#include<iostream>
using namespace std;

class Abc {
    public:
    int x, y;
    Abc() : x(0), y(0) {}
    static void print() {
        // No this Pointer accessible
        printf("I'm in Static %s function\n", __FUNCTION__);
        // cout << x << " " << y << endl;
    }
};
int main(){
    Abc obj1;
    // obj1.x = 1;
    // obj1.y = 2;
    obj1.print();
    Abc::print();

    Abc obj2;
    // obj2.x = 111;
    // obj2.y = 222;

    // obj1::print();
    // obj2::print();
    
    Abc::print();
    Abc::print();

    return 0;
}