#include <iostream>
using namespace std;
/* TC->O(H), SC->O(H) */

struct Node {
    int key;
    struct Node *left, *right;
};

// Utility function to create a new BST node
struct Node *newNode(int item) {
    struct Node *temp = new struct Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
};

// A utility function to insert a new node with given key in BST
struct Node *insert(struct Node *Node, int key) {
    // if the tree is empty, return a new node
    if (Node == NULL)
        return newNode(key);

    // Otherwise, return down the tree
    if (key < Node->key) {
        Node->left = insert(Node->left, key);
    } else if (key > Node->key) {
        Node->right = insert(Node->right, key);
    }
    // return the unchanged node pointer
    return Node;
};

// Utilities function to search a key in a BST
struct Node *search(struct Node *root, int key) {
    // base case: root is NULL/key is present at root
    if (root == NULL || root->key == key)
        return root;

    // key is greater than root's key
    if (root->key < key)
        return search(root->right, key);

    // key is smaller than root's key
    return search(root->left, key);
};

void printLL(Node *head) {
    while (head) {
        cout << head->key << " ";
        head = head->right;
    }
}

void in(Node *root, Node *&prev) {
    if (!root)
        return;
    in(root->left, prev);
    prev->left = 0;
    prev->right = root;
    prev = root;
    in(root->right, prev);
}

Node *flatten(Node *root) {
    Node *dummy = newNode(-1);
    Node *prev = dummy;
    in(root, prev);
    prev->left = prev->right = 0;
    root = dummy->right;
    return root;
}
// Driver Code
int main() {
    struct Node *root = NULL;
    root = insert(root, 5);
    insert(root, 3);
    insert(root, 2);
    insert(root, 4);
    insert(root, 7);
    insert(root, 6);
    insert(root, 8);
    root = flatten(root);
    printLL(root);
    return 0;
}