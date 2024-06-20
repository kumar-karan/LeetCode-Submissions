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
    int findLength(ListNode* head)
    {
        int c=0;
        while(head != NULL)
        {
            c++;
            head= head -> next;
        }

        return c;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* a = headA;
        ListNode* b = headB;
        while(a != b)
        {
            if(a!= NULL)
                a = a-> next;
            else
                a = headB;
            if(b!= NULL)
                b = b-> next;
            else
                b = headA;

        }
            return a;

        /*
        if(headA == headB)    return headA;
        if(headA == NULL || headB == NULL)    return NULL;
        int a = findLength(headA);
        int b = findLength(headB);
        if(a == b){}
        else if(b>a)
            for(int i=0; i<(b-a); i++)
                headB= headB->next;
        else if(a>b)
            for(int i=0; i<(a-b); i++)
                headA= headA->next;

        while(headA != NULL && headB != NULL)
        {
            if(headA == headB)
            {
                return headA;
            }
            headA= headA->next;
            headB= headB->next;
        }
        return NULL;
    
        */
        
        
        
        /*
        ListNode* a = headA;
        ListNode* b = headB;

        while(a->next != NULL && b->next != NULL)
        {
            if( a == b)
                return a;
            a = a-> next;
            b = b-> next;
        }
        if( a-> next == NULL && b-> next == NULL && a!=b)
            return NULL;
        if(a-> next == NULL)
        {
            // b is bigger
            int blen =0;
            int alen =0;
            while ( b->next != NULL)
            {
                blen++;
                b= b-> next;
            }
            while(blen--)
            {
                headB = headB->next;
            }
        }
        else
        {
            int alen =0;
            while(a -> next != NULL)
            {
                alen ++;
                a = a-> next;
            }
            while(alen--)
            {
                headA = headA -> next;
            }
        }

        while(headA != headB)
        {
            headA = headA-> next;
            headB = headB-> next;
        }
        return headA;
        */
    }
};
