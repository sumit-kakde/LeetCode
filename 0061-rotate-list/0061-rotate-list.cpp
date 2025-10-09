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
    ListNode* kthNode(ListNode* temp, int k) {
        int cnt = 1;
        while (temp != NULL) {
            if (cnt == k)
                return temp;
            temp = temp->next;
            cnt++;
        }
        return temp;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;
        int cnt = 1;
        ListNode* tail = head;
        while (tail->next != NULL) {
            cnt++;
            tail = tail->next;
        }
        if (k % cnt == 0)
            return head;

        tail->next = head;
        k = k % cnt;
        ListNode* newNode = kthNode(head, (cnt - k));
        head = newNode->next;
        newNode->next = NULL;
        return head;
    }
};