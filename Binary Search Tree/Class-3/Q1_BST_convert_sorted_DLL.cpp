#include <iostream>
#include <queue>
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

Node* bstUsingInorder(int inorder[], int s, int e) {
	if(s > e) { //base case
		return NULL;
	}

	int mid = (s+e)/2;
	int element = inorder[mid];
	Node* root = new Node(element);

	root->left = bstUsingInorder(inorder, s, mid-1);
	root->right = bstUsingInorder(inorder, mid+1, e);

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
		} else {
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

void convertIntoSortedDLL(Node* root, Node* &head) {
	if(root == NULL ) { //base case
		return;
	}

	convertIntoSortedDLL(root->right, head); //right subtree into LL

	root->right = head; //attach root node

	if(head != NULL)
		head -> left = root;

	head = root; //update head

	convertIntoSortedDLL(root->left, head); //left subtree linked List
}

void printLinkedList(Node* head) {
	Node* temp = head;
    cout << endl;
	while(temp != NULL ) {
		cout << temp -> data << " ";
		temp = temp -> right;
	}
	cout << endl;
}

int main(){
    int inorder[] = {1,2,3,4,5,6,7,8,9};
	int s = 0;
	int e = 8;

	Node* root = bstUsingInorder(inorder, s,e);
	levelOrderTraversal(root);

	cout << "\nPrinting sorted linked list:";
	Node* head = NULL;
	convertIntoSortedDLL(root, head);
	printLinkedList(head);
    return 0;
}