#include<iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
    ListNode(int x) : data(x), next(nullptr) {};
};

class Solution {
public:
    void printList(ListNode* head) {
        while (head != nullptr) {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }

    void pushback(ListNode*& head, int x) {
        ListNode* temp = head;
        ListNode* newNode = new ListNode(x);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a = 0;
        int b = 0;
        int mul1 = 1;
        int mul2 = 1;
        while (l1 != nullptr) {
            a += (l1->data * mul1);
            mul1 *= 10;
            l1 = l1->next;
        }

        while (l2 != nullptr) {
            b += (l2->data * mul2);
            mul2 *= 10;
            l2 = l2->next;
        }

        int c = a + b;
        ListNode* head3 = new ListNode(0);
        while (c > 0) {
            int x = c % 10;
            c = c / 10;
            pushback(head3, x);
        }
        return head3->next;
    }
};

int main() {
    ListNode* head1 = new ListNode(2);
    head1->next = new ListNode(4);
    head1->next->next = new ListNode(3);

    ListNode* head2 = new ListNode(5);
    head2->next = new ListNode(6);
    head2->next->next = new ListNode(4);

    Solution solution;
    ListNode* result = solution.addTwoNumbers(head1, head2);
    solution.printList(result);

    return 0;
}
