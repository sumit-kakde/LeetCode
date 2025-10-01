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
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverse(head->next);

        ListNode* front  = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }

    ListNode* kthnode(ListNode* temp , int k){
        k = k-1;
        while(temp!=NULL && k>0){
            k--;
            temp = temp->next;
        }
         return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode= nullptr;
        while(temp!=NULL){
            ListNode* kthNode = kthnode(temp,k);
            if(kthNode == NULL){
                if(prevNode){
                    prevNode->next = temp;
                }
                break;
            }
            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;
            reverse(temp);

            if(temp==head){
                head = kthNode;
            }else{
                prevNode->next = kthNode;
            }
            prevNode = temp; 
            temp = nextNode; 
        }
        return head;
    }
};