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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head == NULL || head -> next == NULL)
        {
            return head;
        }
        ListNode* temp = head;
        int length=0;
        while(temp != NULL)
        {
            temp = temp -> next;
            length ++;
        }
        if(k != 0 && head != NULL)
            k = k%length;
        if(k==0)
            return head;
        temp = head;
        ListNode* prev = head;
        ListNode* curr = head;
        while(k--)
        {
            while(curr -> next != NULL)
            {
                prev = curr;
                curr = curr -> next;
            }
            prev -> next = NULL;
            curr -> next = temp;
            temp = curr;  
        }
        return temp;
    }
};