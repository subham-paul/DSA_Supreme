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


int main() {
	Node *root;
    int data;
    cout << "Enter data for root node " << endl;
    cin >> data;
	vector<int> ans;
	int level = 0;
    root = buildTree(data);
	printLeftView(root, ans, level);
	cout<<"Printing the LEFT VIEW "<<endl;
	for(auto i : ans){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}