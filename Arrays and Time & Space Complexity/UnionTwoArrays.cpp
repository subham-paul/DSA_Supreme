#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the First Array Size -> ";
    cin>>a;
    cout<<"Enter the Second Array Size -> ";
    cin>>b;
    vector<int> arr(a);
    vector<int> brr(b);
    vector<int> ans;
    cout<<"Enter Value for First Array"<<endl;
    for (int i = 0; i < arr.size(); i++) {
        cin>>arr[i];
    }
    cout<<"Enter Value for Second Array"<<endl;
    for (int i = 0; i < brr.size(); i++) {
        cin>>brr[i];
    }
    //push all element of vector arr
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    //push all element of vector brr
    for (int i = 0; i < brr.size(); i++)
    {
        ans.push_back(brr[i]);
    }
    
	cout << "Printing Ans array " << endl;
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " " ;
	}
    //UNION
	/* int arr[] = {1,3,5,7,9};
	int sizea = 5;
	int brr[] = {2,4,6,8};
	int sizeb = 4;

	vector<int> ans;

	//push all element of vector arr
	for(int i=0; i<sizea; i++) {
		ans.push_back(arr[i]);
	}

	//push all element of vector brr
	for(int i=0; i<sizeb; i++) {
		ans.push_back(brr[i]);
	}

	//print ans
	cout << "Printing ans array " << endl;
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " " ;
	} */
    return 0;
}