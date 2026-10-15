/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
private:
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    void insertAttail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* temp = new ListNode(val);

        if (head == NULL) {
            head = temp;
            tail = temp;
            return;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    ListNode* add(ListNode* first, ListNode* second) {
        int carry = 0;
        ListNode* anshead = NULL;
        ListNode* anstail = NULL;

        while (first != NULL || second != NULL || carry != 0) {
            int sum = carry;

            if (first != NULL) {
                sum += first->val;
                first = first->next;
            }

            if (second != NULL) {
                sum += second->val;
                second = second->next;
            }
            int digit = sum % 10;
            carry = sum / 10;
            insertAttail(anshead, anstail, digit);
        }
        return anshead;
    }

    public : 
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        first = reverse(first);
        second = reverse(second);
        ListNode* ans = add(first, second);
        ans = reverse(ans);
        return ans;
    }
};