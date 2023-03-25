#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<"now ans "<<ans<<"-"<<arr[i]<<endl;
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    vector<int> arr = {1,1,4,2,3,2,4,5};
    int uniqueElement = findUnique(arr);
    cout << "Unique Element is  " << uniqueElement << endl;
    return 0;
}