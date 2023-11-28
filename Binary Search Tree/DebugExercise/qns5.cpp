#include <bits/stdc++.h>
using namespace std;

void transformTreeHelper(Node *root, int *sum)
{
    if (root == NULL)
        return;

    transformTreeHelper(root->right, sum);
    *sum = *sum + root->data;
    root->data = *sum - root->data;
    transformTreeHelper(root->left, sum);
}

void transformTree(struct Node *root)
{
    int sum = 0;
    transformTreeHelper(root, &sum);
}

int main()
{
    return 0;
}