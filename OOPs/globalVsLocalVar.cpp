#include <iostream>
using namespace std;

int x = 22; // GLOBAL VARIABLE

void fun(){
  int x = 60;
  cout<< x <<endl;
  ::x = 44;
  cout<< ::x <<endl;
}
int main() {
  x = 91; // GLOBAL VARIABLE
  int x = 11; // LOCAL VARIABLE
  // cout<< x <<endl;
  ::x = 47; // accessing GLOBAL VARIABLE with ::
  // cout<< x <<endl; // 1st priority to LOCAL VARIABLE
  {
    int x = 50;
    // cout<< x <<endl;
    {
      int x = 90;
      // cout<< x <<endl;
    }
    // cout<< x <<endl;
    // cout<< ::x <<endl;
  }
  // fun();

  return 0;
}