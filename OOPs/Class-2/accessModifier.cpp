#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
};
class Dog: protected Animal{
    public:
    void print(){
        cout<<this->age;
    }

};
int main(){
    Dog D1;
    // cout<<D1.age;
    D1.print(); 

    return 0;
}