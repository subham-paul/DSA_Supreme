#include <iostream>
using namespace std;

// Creation of class
class Human {

};
class Animal {
    // State or properties
    // Access modifier (Default private)
private:
    int weight;
    string gender;

public:
    int age;
    string name;
    // default Constructor
    Animal(){
        cout<<"Constructor called"<<endl;
    }

    // Behaviour or functions
    void eat() {
        // cout << "I am eating";
    }

    void sleep() {
        // cout << "I am sleeping";
    }

    // Setter
    void setWeight(int w){
        weight = w;
    }
    // this keyword
    // void setWeight(int weight) {
    //     this->weight = weight; // Differentiate
    // }

    // Getter
    void getWeight() {
        // cout << weight;
    }

    // Setter
    void setGender(string g){
        gender = g;
    }

    // Getter
    string getGender(){
        return gender;
    }
};

int main() {
    // For minimum posible space allocate Class size 1
    // cout<<"Size of Empty class is " << sizeof(Human)<<endl;

    // cout<<"Size of Animal class is "<< sizeof(Animal)<<endl;

    // Object creation

    // Static Memory Allocation
    Animal ramesh;

    // Accessing property of object use dot operator
    ramesh.age = 12;
    ramesh.name = "lion";
    // ramesh.weight = 77;
    
    ramesh.setGender("Male");

    // cout << "Gender " << ramesh.getGender() << endl;
    // cout << ramesh.age << " " << ramesh.name << endl;

    // cout << ramesh.weight << " " << ramesh.weight << endl; // Private member can't used outside class

    // Calling member functions
    ramesh.eat();
    // cout << endl;
    // Getter and setter use
    ramesh.setWeight(101);
    ramesh.getWeight();



    // Dyanamic Memory Allocation
    Animal *suresh = new Animal;
    // 1st way (dot operator)
    (*suresh).age = 15;
    (*suresh).name = "billi";
    // 2nd way (Arrow operator)
    suresh->name = "sher";
    suresh->age = 16;
    suresh->eat();
    return 0;
}