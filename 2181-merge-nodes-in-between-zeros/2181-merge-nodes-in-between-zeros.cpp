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
    ListNode* mergeNodes(ListNode* head) 
    {
        if(!head) return 0;

        ListNode* temp = NULL;
        ListNode* slow = head;
        ListNode* fast = head->next;
        int sum =0;
        while(fast)
        {
            if(fast->val != 0)
                sum = sum+ fast -> val;
            else 
            {
                slow -> val = sum;
                temp = slow;
                slow = slow -> next;
                sum =0;
            }
            fast = fast -> next;
        }
        temp -> next =0;
        // deleting old list
        // while(slow)
        // {
        //     ListNode* next = slow -> next;
        //     delete slow;
        //     slow = next;

        // }
        return head;
    }
};