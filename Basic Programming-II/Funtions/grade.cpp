#include<iostream>
using namespace std;
char getGrade(int marks){
    // if(marks >= 90) 
	// 	return 'A';
	// else if(marks >= 80)
	// 	return 'B';
	// else if(marks >= 70)
	// 	return 'C';
	// else if(marks >= 60) 
	// 	return 'D';
	// else
	// 	return 'E';

	//assuming marks is between 0 to 100
    switch (marks/10)
    {
    case 10: return 'A'; break;
    case 9: return 'B'; break;
    case 8: return 'C'; break;
    case 7: return 'D'; break;
    case 6: return 'E'; break;
    default: return 'F'; break;
    }
}
int main(){
    int n;
    cout<<"Enter the number here -> ";
    cin>>n;
    cout<<getGrade(n);
    return 0;
}