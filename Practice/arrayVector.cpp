#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{10, 20, 30}; // Initialised vector array value
    vector<int> brr(11, 0);      // Full Array initialised by 0
    // vector array print
    for (int loop = 0; loop < arr.size(); loop++)
    {
        cout << arr[loop] << ", ";
    }
    cout << endl;
    cout << "After insert value 99";
    cout << endl;
    arr.push_back(99);
    for (int loop = 0; loop < arr.size(); loop++)
    {
        cout << arr[loop] << ", ";
    }
    arr.pop_back();
    cout << endl;
    for (int loop = 0; loop < arr.size(); loop++)
    {
        cout << arr[loop] << ", ";
    }
    /* for (int loop = 0; loop < brr.size(); loop++)
    {
        cout << brr[loop] << ", ";
    } */
    return 0;
}