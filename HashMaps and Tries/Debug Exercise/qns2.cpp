#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> myMap;
    myMap["One"] = 1;
    myMap["Two"] = 2;
    myMap["Three"] = 3;

    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    return 0;
}