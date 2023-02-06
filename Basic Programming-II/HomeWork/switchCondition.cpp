#include <iostream>
using namespace std;
char getGrade(int marks) {
    switch (marks) {
    case 95 ... 100: return 'A'; break;
    case 75 ... 94: return 'B'; break;
    case 60 ... 74 : return 'C'; break;
    case 40 ... 59 : return 'D'; break;
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
