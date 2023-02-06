#include <iostream>
using namespace std;
char getGrade(int marks) {
    switch (marks) {
    case 100 ... 95: return 'A'; break;
    case 94 ... 75: return 'B'; break;
    case 74 ... 60: return 'C'; break;
    case 59 ... 40: return 'D'; break;
    default: return 'F'; break;
    }
}
int main()
{
    int n;
    cout << "Enter the number here -> ";
    cin >> n;
    cout << getGrade(n);
    return 0;
}
