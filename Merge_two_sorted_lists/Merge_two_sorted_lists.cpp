#include<iostream>
using namespace std;

struct ListNode {
	int data;
	ListNode* next;
	ListNode(int x) : data(x), next(nullptr) {};
};


void printLinkedList(ListNode* head) {
	while (head != nullptr) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

ListNode* mergeLinkedList(ListNode* head1, ListNode* head2) {
	ListNode* current = new ListNode(0);
	ListNode* yummy = current;
	while (head1 != NULL && head2 != NULL) {
		if (head1->data < head2->data) {
			current->next = head1;
			head1 = head1->next;
		}
		else
		{
			current->next = head2;
			head2 = head2->next;
		}
		current = current->next;
	}
	return yummy->next; 
}

//tao 1 linked list 
//merge sort

//c2 : tao 1 linked 
// sap xep bubble sort

int main() {
	ListNode* head1 = new ListNode(1);
	head1->next = new ListNode(2);
	head1->next->next = new ListNode(4);

	ListNode* head2 = new ListNode(1);
	head2->next = new ListNode(3);
	head2->next->next =new ListNode(4);

	printLinkedList(head1);
	printLinkedList(head2);

	ListNode* mergedList = mergeLinkedList(head1, head2);
	printLinkedList(mergedList);
}