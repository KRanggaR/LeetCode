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
    ListNode* mergeTwoLists(ListNode* t1, ListNode* t2) 
    {
        
        if(t1==NULL)
            return t2;
        if(t2==NULL)
            return t1;
        
        ListNode* Head = NULL;
        ListNode* Tail = NULL;
    
        while(t1!=NULL && t2!=NULL)
        {
            if(t1->val<t2->val)
            {
                if(Head==NULL)
                    Head=Tail=t1;
                else
                    Tail->next=t1;
                    Tail=t1;
                t1=t1->next;
                
            }
            else
            {
                if(Head==NULL)
                    Head=Tail=t2;
                else
                    Tail->next=t2;
                    Tail=t2;
                t2=t2->next;
            }
        }
        
        if (t1 != NULL)
        {
            Tail->next=t1;
        }

        if (t2 != NULL)
        {
            Tail->next=t2;
        }
        return Head;
        
        
    }
    
    
};