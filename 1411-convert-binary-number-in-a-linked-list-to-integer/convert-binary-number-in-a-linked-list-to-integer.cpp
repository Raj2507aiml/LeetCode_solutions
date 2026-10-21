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
    int getDecimalValue(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* p1 = head;
        int n =0 ;
        int sum = 0;
        while(p1!=NULL){
            n++;
            p1 = p1->next;
        }
        p1 = head;
        while(p1!=NULL){
            sum = sum + p1->val * (int) pow(2 , --n);
            p1 = p1->next;
        }
        return sum;
    }
};