#include<iostream>
using namespace std;

struct ListNode {
	int data;
	ListNode* next;
	ListNode(int x) : data(x), next(nullptr) {};
};

class Solution {
public:
	bool checkCycle(ListNode*& head) {
		ListNode* slow = head;
		ListNode* fast = head;

		while (fast->next != nullptr && fast->next->next != nullptr) {
			slow = slow->next;
			fast = fast->next->next;
			if (fast == slow) return true;
		}
		return false;
	}
};

int main() {
	ListNode* head = new ListNode(3);
	head->next = new ListNode(2);
	head->next->next = new ListNode(0);
	head->next->next->next = new ListNode(-4);
	head->next->next->next->next = head->next;

	Solution solution;
	if (solution.checkCycle(head) == true) cout << "true" << endl;
	else cout << false << endl;
}