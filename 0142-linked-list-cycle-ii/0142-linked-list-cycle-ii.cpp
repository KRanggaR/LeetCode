/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    ListNode* hasCycle(ListNode *head) {
        if(head==NULL)
            return NULL;

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && slow!=NULL && fast->next != NULL){
            fast=fast->next;
            if(fast!=NULL)
                fast=fast->next;
            
            slow=slow->next;
            
            if(fast == slow)
            {
                return slow;
            }
        }
        return NULL;
        
    }
    
    
public:
    ListNode *detectCycle(ListNode *head) {
        
        
        ListNode* intersection = hasCycle(head);
        ListNode* slow = head;
        
        if(head == NULL || intersection==NULL)
            return NULL;
        
        while(slow != intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
    }
};