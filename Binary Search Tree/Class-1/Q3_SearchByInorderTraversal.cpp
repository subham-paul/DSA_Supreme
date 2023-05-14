#include <iostream>
#include<queue>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBST(Node* root, int data) {
    if(root == NULL) {
        //this is the first node we have to create
        root = new Node(data);
        return root;
    }

    //no the first node 
    if(root-> data > data) {
        //insert in left
        root->left = insertIntoBST(root->left, data);
    } else {
        //insert into right
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node* &root) {
    int data;
    cin >> data;

    while(data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}
//assuming there are only unique values in tree
Node* findNodeInBST(Node* root, int target) {
	///base case
	if(root == NULL) {
		return NULL;
	}

	if(root->data == target) 
		return root;
	
	if(target > root->data) {
		// Search on right subTree
		return findNodeInBST(root->right, target);
	} else {
		return findNodeInBST(root->left, target);
	}
}

int main() {
    Node* root = NULL;
    cout << "Enter the data for Node " << endl;
    takeInput(root);
    cout << endl;
    bool ans  = findNodeInBST(root, 17);
    if(ans) {
        cout << "Value Present here.\n";
    } else {
        cout << "Value Not Present here.\n";
    }
    return 0;
}