#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    for (auto it = myMap.begin(); it != myMap.end(); /* no increment here */) {
        std::cout << it->first << ": " << it->second << std::endl;
        if (it->first == 2) {
            it = myMap.erase(it);
        } else {
            ++it;
        }
    }

    return 0;
}