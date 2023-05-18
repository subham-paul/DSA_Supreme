#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
	int data;
	Node *left;
	Node *right;

	Node(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

Node *insertIntoBST(Node *root, int data) {
	if (root == NULL) {
		// this is the first node we have to create
		root = new Node(data);
		return root;
	}

	// no the first node
	if (root->data > data) {
		// insert in left
		root->left = insertIntoBST(root->left, data);
	} else {
		// insert into right
		root->right = insertIntoBST(root->right, data);
	}
	return root;
}

void takeInput(Node *&root) {
	int data;
	cin >> data;

	while (data != -1) {
		root = insertIntoBST(root, data);
		cin >> data;
	}
}
void levelOrderTraversal(Node *root) {
	queue<Node *> q;
	// initially
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		// A
		Node *temp = q.front();
		// B
		q.pop();

		if (temp == NULL) {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		} else {
			// C
			cout << temp->data << " ";
			// D
			if (temp->left) {
				q.push(temp->left);
			}
			if (temp->right) {
				q.push(temp->right);
			}
		}
	}
}

void preOrderTraversal(Node *root) {
	// NLR
	if (root == NULL)
		return;
	cout << root->data << " ";
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root) {
	// LNR
	if (root == NULL)
		return;
	inOrderTraversal(root->left);
	cout << root->data << " ";
	inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root) {
	// LRN
	if (root == NULL)
		return;
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	cout << root->data << " ";
}

Node *bstUsingInorder(int inorder[], int s, int e) {
	// base case
	if (s > e) {
		return NULL;
	}

	int mid = (s + e) / 2;
	int element = inorder[mid];
	Node *root = new Node(element);

	root->left = bstUsingInorder(inorder, s, mid - 1);
	root->right = bstUsingInorder(inorder, mid + 1, e);

	return root;
}

int main() {
	int inorder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int s = 0;
	int e = 8;

	Node *root = bstUsingInorder(inorder, s, e);
	levelOrderTraversal(root);
	return 0;
}