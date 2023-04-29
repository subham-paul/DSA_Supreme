#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> prevSmallerElement(vector<int> &input) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(input.size());

    // left to right -> prev smaller
    for (int i = 0; i < input.size(); i++) {

        int curr = input[i];

        while (s.top() >= curr) { // apka answer stack me
            s.pop();
        }

        ans[i] = s.top(); // small element found -> ans store

        s.push(curr); // push curr element
    }
    return ans;
}

vector<int> nextSmaller(vector<int> &input) {
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());

    for (int i = input.size() - 1; i >= 0; i--) {
        int curr = input[i];

        while (s.top() >= curr) { // apka answer stack me
            s.pop();
        }

        ans[i] = s.top(); // small element found -> ans store

        s.push(curr); // push curr element
    }
    return ans;
}

int main() {
    vector<int> input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    vector<int> ans1 = nextSmaller(input);

    cout << "Printing Next smaller element -> ";
    for (int i = 0; i < input.size(); i++) {
        cout << ans1[i] << " ";
    }
    cout << endl;
    
    vector<int> ans2 = prevSmallerElement(input);
    cout << "Printing Prev smaller element -> ";
    for (int i = 0; i < input.size(); i++) {
        cout << ans2[i] << " ";
    }
    cout << endl;

    return 0;
}