#include <iostream>
using namespace std;
float areaOfCircle(float r)
{
    float area = 3.14 * r * r;
    return area;
}
int main()
{
    float n;
    cout << "Enter the Radius -> ";
    cin >> n;
    cout <<"Area of Circle is "<< areaOfCircle(n)<<endl;
    return 0;
}