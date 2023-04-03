#include <iostream>
using namespace std;

class Employee {
    private:
        int salary;
        string gender;

    public:
        void setSalary(int s) {
            salary = s;
        }
        int getSalary() {
            return salary;
        }

        void setGender(string g) {
            gender = g;
        }
        string getGender() {
            return gender;
        }
    };

int main() {
    Employee myObj;
    myObj.setSalary(50000);
    myObj.setGender("Female");
    cout << myObj.getGender() << endl;
    cout << myObj.getSalary();
    return 0;
}
