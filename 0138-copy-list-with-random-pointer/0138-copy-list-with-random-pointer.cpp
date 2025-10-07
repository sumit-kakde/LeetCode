/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insertCopy(Node* head){
        Node* temp =head;
        while(temp!=NULL){
            Node* CopyNode = new Node(temp->val);
            CopyNode->next = temp->next;
            temp->next = CopyNode;
            temp = temp->next->next;
        }
    }
        void connectRandom(Node* head){
        Node* temp =head;
        while(temp!=NULL){
            Node* CopyNode = temp->next;
            if(temp->random){
                CopyNode->random = temp->random->next;
            }else{
                CopyNode->random = NULL;   
            }
            temp = temp->next->next;
        }
        }
        
        Node* getDeepCopy(Node* head){
            Node* temp = head;
            Node* dummyNode = new Node(-1);
            Node* res = dummyNode;
            while(temp!=NULL){
                res->next = temp->next;
                temp ->next = temp->next->next;
                res = res->next;
                temp = temp->next;
            }
            return dummyNode->next;
        }

    Node* copyRandomList(Node* head) {
        insertCopy(head);
        connectRandom(head);
        return getDeepCopy(head);
    }
};