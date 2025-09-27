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
    ListNode* reverseList(ListNode * head){
        if(head==NULL || head->next == NULL) return head;
        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        head->next = NULL;
        front ->next = head;
        return newHead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast  = fast ->next->next;

        }
        ListNode*newh = reverseList(slow->next);
        ListNode* first = head;
        ListNode* second = newh;

        while(second!=NULL){
            if(first->val!=second->val){
                reverseList(newh);
                return false;
            }
            first = first->next;
            second = second->next;

        }
        reverseList(newh);
        return true;
    }
};