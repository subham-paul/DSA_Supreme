#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* left;
	Node* right;

	Node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

Node* buildTree(int data) {
	if(data == -1) {
		return NULL;
	}
	Node* root = new Node(data);
	int leftData;
	cout << "Enter data for left part of " << data << " node " << endl;
	cin >> leftData;
    root->left = buildTree(leftData);
	
	int rightData;
	cout << "Enter data for right part of " << data << " node " << endl;
	cin >> rightData;
	root-> right = buildTree(rightData);
	return root;
}

void printLeftBoundary(Node* root) {
	//base case
	//if root is NULL, then go back
	if(root == NULL)
		return;
	//if root is a leaf node , then go back 
	if(root->left == NULL && root->right == NULL)
		return;

	cout << root->data << " ";
	
	if(root->left) {
		printLeftBoundary(root->left);
	} else {
		printLeftBoundary(root->right);
	}
}

void printLeafBoundary(Node* root) {
	//base case
	if(root == NULL)
		return;
	if(root->left == NULL && root->right == NULL) {
		cout << root->data << " ";
	}
	printLeafBoundary(root->left);
	printLeafBoundary(root->right);
}

void printRightBoundary(Node* root) {
	//base case
	if(root == NULL)
		return;
	if(root->left == NULL && root->right == NULL)
		return ;
	if(root->right) {
		printRightBoundary(root->right);
	} else {
		printRightBoundary(root->left);
	}	
	cout << root->data << " ";
}

void boundaryTraversal(Node* root) {
	if(root == NULL)
		return;
	cout << root->data << " ";
	//A
	printLeftBoundary(root->left);
	//B
	printLeafBoundary(root);
	//C
	printRightBoundary(root->right);
}

int main() {
	Node *root;
    int data;
    cout << "Enter data for root node" << endl;
    cin >> data;
	root = buildTree(data);
	boundaryTraversal(root);
	cout<<endl;
	return 0;
}