/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            ListNode* arr = headA;
            ListNode* arr1 = headB;
        while(arr != arr1) {
            if(arr == nullptr)
                arr = headB;
            else
                arr = arr->next;
            if(arr1 == nullptr)
                arr1 = headA;
            else
                arr1 = arr1->next;
            }
    return arr;
    }                                                                                                                                 };