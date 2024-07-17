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

    ListNode* reverseLL(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL)
        {
            ListNode* forw = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) 
    {
        if (head == nullptr || head->next == nullptr) {
            return true; // An empty list or single node list is considered a palindrome
        }
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast-> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }    
        slow = reverseLL(slow);

        while(slow != NULL)
        {
            if(head -> val != slow -> val)
                return false;

            slow = slow -> next;
            head = head -> next;

        }

        return true;
    }
};