#include <iostream>
#include<queue>
#include<map>
using namespace std;

class Node {
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

void printTopView(Node* root) {
	if(root == NULL )
		return;
	map<int, int> topNode; // create a map for storing HD -> TopNode ->data

	//Level Order, we will store a pair consisting of Node and Horizontal Distance
	queue< pair<Node*, int> > q;
	q.push(make_pair(root, 0));

	while(!q.empty()) {
		pair<Node*, int> temp = q.front();
		q.pop();
		Node* frontNode = temp.first;
		int hd = temp.second;

		//jo bhi horizontal distance aaya h , check if answer for that hd already exists or not
		if(topNode.find(hd) == topNode.end()) {
			topNode[hd] = frontNode->data; //crete entry
		}
		if(frontNode -> left)
			q.push(make_pair(frontNode->left, hd-1));
		if(frontNode -> right)
			q.push(make_pair(frontNode->right, hd+1));
	}

	cout << "Printing the TOP VIEW answer: " << endl;
	for(auto i: topNode) {
		cout << i.first << " -> " << i.second << endl;
	}
}

int main() {
	Node *root;
    int data;
    cout << "Enter data for root node" << endl;
    cin >> data;
    root = buildTree(data);
	printTopView(root);
	return 0;
}