#include<iostream>
#include "bird.h"
using namespace std;

void birdSomething(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
}
int main(){
    Bird *bird = new eagle();
    birdSomething(bird);
    return 0;
}