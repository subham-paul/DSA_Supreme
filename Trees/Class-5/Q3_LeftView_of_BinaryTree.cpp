#include <iostream>
#include<queue>
#include<map>
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

	//Step A , B and C
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

void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}

void inorderTraversal(Node* root) {
	//base case
	if(root == NULL) {
		return ;
	}

	//LNR
	inorderTraversal(root->left);
	cout << root -> data << " ";
	inorderTraversal(root->right);
}

void preorderTraversal(Node* root) {
	//base case
	if(root == NULL) {
		return ;
	}

	//NLR
	cout << root -> data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}

void postorderTraversal(Node* root) {
	if(root == NULL)
		return;

	//LRN
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	cout << root -> data << " ";
}

int height(Node* root) {
	if(root == NULL) 
		return 0;

	int leftHeight = height(root->left);
	int rightHeight = height(root->right);
	int ans = max(leftHeight, rightHeight) + 1;
	return ans;
}

void printRightView(Node* root, vector<int> &ans, int level) {
	//base case
	if(root == NULL) 
		return;

	if(level == ans.size()) {
		ans.push_back(root->data);
	}

	//right
	printRightView(root->right, ans, level+1);

	//left
	printRightView(root->left, ans, level+1);
}

void printLeftView(Node* root, vector<int> &ans, int level) {
	//base case
	if(root == NULL) 
		return;

	if(level == ans.size()) {
		ans.push_back(root->data);
	}

	//left
	printLeftView(root->left, ans, level+1);
	//right
	printLeftView(root->right, ans, level+1);
	
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
	}
	else {
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
	}
	else {
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
    cout << "Enter data for root node " << endl;
    cin >> data;
    root = buildTree(data);
	printLeftView(root);
	return 0;
}