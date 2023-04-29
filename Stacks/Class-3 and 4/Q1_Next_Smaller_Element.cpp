#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmaller(vector<int> &input) {
    stack<int> s;
    s.push(-1); // Push -1 initially

    vector<int> ans(input.size());

    // Traverse from right to left
    for (int i = input.size() - 1; i >= 0; i--) {

        int curr = input[i]; // Processing the current element

        while (s.top() >= curr) {
            s.pop();
        }

        // Top element will be the answer -> Smaller element store
        ans[i] = s.top();

        // push krdo curr element ko
        s.push(curr);
    }
    return ans;
}

int main() {
    vector<int> input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    vector<int> ans = nextSmaller(input);

    cout << "Printing Next smaller element -> ";

    for (int i = 0; i < input.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}