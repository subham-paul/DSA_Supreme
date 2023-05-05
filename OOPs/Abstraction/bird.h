#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

class Bird {
    public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // classes that inherits this class
    // has to implement pure virtual Functions
};

class sparrow: public Bird {
    private:
        void eat() {
            std::cout<<"Sparrow is eating \n";
        }
        void fly() {
            std::cout<<"Sparrow is flying \n";
        }
};

class eagle: public Bird {
    private:
        void eat() {
            std::cout<<"eagle is eating \n";
        }
        void fly() {
            std::cout<<"eagle is flying faster than others \n";
        }
};

class pegion: public Bird {
    private:
        void eat() {
            std::cout<<"Pegion is eating \n";
        }
        void fly() {
            std::cout<<"Pegion is flying \n";
        }
};

#endif // BIRD_H