#include<iostream>
using namespace std;

class abc {
    mutable int x; // mutable used for change const data
    int *y;
    int z;

    public:
        // Old style
        /* // abc(){
        //     x = 0;
        //     y = new int(0);
        // }
        abc(int _x, int _y, int _z = 0) { // default argument is z
            x = _x;
            y = new int(_y);
            z = _z;
        } */

        // Initialization List, This is New way to Contructor Define, here const variable also initialised
        abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z) {}

        int getX() const {
            x = 11;
            return x;
        }
        void setX(int _val) {
            x = _val;
        }
        int getY() const {
            return *y;
        }
        void setY(int _val) {
            *y = _val;
        }
        int getZ() const { 
            return z; 
        }
};

void printABC(const abc &a) { // taking const object byRef
    cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
}

int main() {
    abc a(1, 2, 3);
    printABC(a);
    return 0;
}