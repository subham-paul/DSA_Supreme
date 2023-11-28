#include <iostream>
#include <map>
// using namespace std;
int main() {
    std::map<int, std::string> myMap;
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[3] = "Orange";

    int key = 4;
    // if (myMap.find(key)) {
    //     std::cout << "Key " << key << " exists." << std::endl;
    // } else {
    //     std::cout << "Key " << key << " does not exist." << std::endl;
    // }
    if(myMap.find(key) != myMap.end()) {
        std::cout << "Value for key " << key << ": " << myMap.at(key) << std::endl;
    } else {
        std::cout << "Key " << key << " does not exist." << std::endl;
    }
    


    return 0;
}