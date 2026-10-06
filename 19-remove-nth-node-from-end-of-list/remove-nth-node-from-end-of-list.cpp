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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int l = 0;
        while(temp!=NULL){
            l++;
            temp = temp->next;
        }   
        int k = l -n +1;
        ListNode* Node1 = head;
        if(k==1){
            ListNode* temp1 = head;
            head = head->next;
            delete temp1;
            return head;
        }
        while(k>2){
            Node1 = Node1->next;
            k--;
        }
        ListNode* temp1 = Node1->next;
        Node1->next = Node1->next->next;
        delete temp1;
        return head;
    }
};