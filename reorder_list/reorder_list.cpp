#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return; // Danh sách rỗng hoặc có ít nhất 2 nút
        }

        // Bước 1: Tìm phần giữa của danh sách
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Bước 2: Chia danh sách thành hai phần
        ListNode* secondHalf = slow->next;
        slow->next = nullptr;

        // Bước 3: Đảo ngược phần thứ hai của danh sách
        secondHalf = reverseList(secondHalf);

        // Bước 4: Hợp nhất hai phần của danh sách
        ListNode* firstHalf = head;
        while (secondHalf) {
            ListNode* temp1 = firstHalf->next;
            ListNode* temp2 = secondHalf->next;
            firstHalf->next = secondHalf;
            secondHalf->next = temp1;
            firstHalf = temp1;
            secondHalf = temp2;
        }
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;

        while (current != nullptr) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }
};

// Hàm in danh sách liên kết
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Tạo danh sách liên kết đầu vào
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;
    std::cout << "Danh sach ban đau: ";
    printList(head);

    solution.reorderList(head);

    std::cout << "Danh sach da sap xep lai: ";
    printList(head);

    return 0;
}
