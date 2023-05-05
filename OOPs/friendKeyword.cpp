#include<iostream>
using namespace std;
class A {
    private:
        int x;
    public:
        A(int _val) : x(_val){};
        
        int getX() const { return; }
        void setX(int _val) { x = _val; }

        friend class B;
        friend void print(const A &);
};
class B {
    public:
        void print(const A &a){
            cout<<a.x<<endl;
        }
};
int main() {
    A a(5);
    B b;
    b.print(a);
    return 0;
}