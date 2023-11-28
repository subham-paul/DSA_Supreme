#include<bits/stdc++.h>
using namespace std;

void secondLargestUtil(Node *root, int &c) {
    if (root == NULL || c >= 2)
        return;
    secondLargestUtil(root->right, c);
    c++;
    if (c == 2) {
        cout << root->key << endl; // Print 2nd Largest Element
        return;
    }
    secondLargestUtil(root->left, c);
}

void secondLargest(Node *root) {
    int c = 0;
    secondLargestUtil(root, c);
}

int main() {
    return 0;
}