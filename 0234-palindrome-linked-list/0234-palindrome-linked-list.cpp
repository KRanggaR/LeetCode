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

private:
    ListNode* getMid(ListNode* head)
    {   
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }

    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fwd = NULL;
        while(curr!=NULL)
        {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
            
        }
        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return true;
        }

        //get middle
        ListNode* middle = getMid(head);

        //reverse after middle
        ListNode* temp = middle->next;
        ListNode* head2 = reverse(temp);

        //comparision
        while(head2!=NULL)
        {
            if(head->val != head2->val)
            {
                return false;
            }
            head = head->next;
            head2 = head2->next;
        }
        return true;
    }
};