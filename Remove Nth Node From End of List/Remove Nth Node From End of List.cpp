#include<iostream>
using namespace std;

struct ListNode {
	int data;
	ListNode* next;
	ListNode(int x) : data(x), next(nullptr) {};
};

class Solution {
public:
	int sizeList(ListNode* head) {
		int k = 0; // Bắt đầu từ 0, không phải là 1
		while (head != nullptr) { // Sử dụng != thay vì ==
			head = head->next;
			k++;
		}
		return k;
	}

	ListNode* ReMove(ListNode* head, int n) {
		int sizeL = sizeList(head);
		int k = sizeL - n;

		// Xử lý trường hợp đặc biệt nếu cần xóa phần tử đầu tiên
		if (k == 0) {
			ListNode* newHead = head->next;
			delete head;
			return newHead;
		}

		ListNode* temp = head;
		for (int i = 1; i < k; i++) {
			temp = temp->next;
		}
		ListNode* removeNode = temp->next;
		temp->next = removeNode->next;
		delete removeNode;

		// Trả về con trỏ đầu danh sách sau khi đã xóa
		return head;
	}

	void printList(ListNode* head) {
		ListNode* temp = head;
		while (temp != nullptr) { // Sử dụng != thay vì ==
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
};

int main() {
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	int n = 2;
	Solution solution;
	head = solution.ReMove(head, n); // Cập nhật head sau khi xóa
	solution.printList(head);
}
