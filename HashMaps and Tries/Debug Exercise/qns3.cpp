#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[3] = "Orange";

    int key = 3;
    if(myMap.find(key) != myMap.end())
    std::cout << "Value for key " << key << ": " << myMap.at(key) << std::endl;

    return 0;
}