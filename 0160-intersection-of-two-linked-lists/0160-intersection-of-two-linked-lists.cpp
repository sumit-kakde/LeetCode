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
        int cnt1 = 0;
        int cnt2 = 0 ;

        ListNode* temp = headA;
        while(temp!=NULL){
            cnt1++;
            temp = temp->next;
        }
        temp = headB;
        while(temp!=NULL){
            cnt2++;
            temp = temp->next;
        }
        int d = abs(cnt1-cnt2);

        ListNode* t1 = headA;
        ListNode* t2 = headB;

        if(cnt1>cnt2){
            for(int i=0;i<d;i++){
                t1= t1->next;
            }
        }else{
            for(int i=0;i<d;i++){
                t2 = t2->next;
            }
        }

        while(t1!=NULL && t2!=NULL){
            if(t1 == t2){
                return t1;
            }
            t1=t1->next;
            t2 = t2->next;
        }
return NULL;
    }
};