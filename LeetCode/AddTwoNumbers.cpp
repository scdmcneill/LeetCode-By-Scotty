// You are given two non - empty linked lists representing two non - negative integers.
// The digits are stored in reverse order, and each of their nodes contains a single digit.
// Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

#include <iostream>
#include <vector>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

ListNode* reverseList(ListNode* head);

int main() {
	ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
	ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

	ListNode* sum = addTwoNumbers(l1, l2);

	sum = reverseList(sum);

	while (sum) {
		std::cout << sum->val << ' ';
		sum = sum->next;
	}

	return 0;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	int carry = 0;
	ListNode answer(0);
	ListNode* current = &answer;
	
	while (l1 || l2 || carry) {
		int sum = carry;

		if (l1) {
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2) {
			sum += l2->val;
			l2 = l2->next;
		}

		carry = sum / 10;

		current->next = new ListNode(sum % 10);
		current = current->next;
	}
	return answer.next;
}

ListNode* reverseList(ListNode* head) {
	ListNode* previous = nullptr;
	ListNode* current = head;
	while (current != nullptr) {
		ListNode* next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	return previous;
}