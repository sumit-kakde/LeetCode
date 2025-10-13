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
    ListNode* oddEvenList(ListNode* head) {
          if (head == nullptr || head->next == nullptr) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = head ->next;

         while(even!= NULL && even->next!= NULL){
            odd->next = even->next;
            odd = odd->next;

            // link even to the next even node (if any)
            even->next = odd->next;
            even = even->next;
         }
        odd->next = evenHead;
        return head;
    }
};