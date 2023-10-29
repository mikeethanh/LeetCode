#include<iostream>
using namespace std;
//xay dung node

struct Node {
	int data; 
	Node* next;
};

//make node 
Node* makenode(int x) {
	Node* newNode = new Node();
	newNode->data = x; 
	newNode->next = NULL;
	return newNode;
}

//them node vao danh sach lien ket 
void popFront(Node*& head, int x) {
	Node* newNode = makenode(x);
	if (head == NULL) {
		head = newNode;
		return;
	}
	newNode->next = head;
	head = newNode;
}

//duyet 
void duyet(Node* head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}


Node* reverseList(Node* head) {
	Node* prevNode = NULL;
	Node* current = head;
	Node* nextNode = NULL;
	while (current != NULL) {
		nextNode = current->next; 
		current->next = prevNode; 
		prevNode = current; 
		current = nextNode;
	}

	return prevNode;
}

int main() {
	Node* head = NULL;
	for (int i = 5; i > 0; i--) {
		popFront(head, i);
	}
	duyet(head);

	Node* newHead =reverseList(head);

	duyet(newHead);
}