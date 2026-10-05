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
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        for(int i = left - 1, j = right - 1; i < j; i++, j--) {
           swap(arr[i], arr[j]);
        }
        ListNode* newHead = new ListNode(arr[0]);
        ListNode* curr = newHead;
        for(int i = 1 ;i < arr.size();i++){
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }
        return newHead;
    }
};