#include <vector>

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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        int n = lists.size();
        if (n == 0) 
            return NULL;
        if (n == 1) 
            return lists[0];
        
        while (n > 1) 
        {
            int k = (n + 1) / 2;
            for (int i = 0; i < n / 2; ++i) {
                lists[i] = mergeTwoLists(lists[i], lists[i + k]);
            }
            n = k;
        }
        
        return lists[0];
    }

    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        if (!left) return right;
        if (!right) return left;

        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;

        while (left && right) {
            if (left->val <= right->val) {
                temp->next = left;
                temp = left;
                left = left->next;
            } else {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }

        if (left) {
            temp->next = left;
        }
        if (right) {
            temp->next = right;
        }

        ans = ans->next;
        return ans;
    }
};
