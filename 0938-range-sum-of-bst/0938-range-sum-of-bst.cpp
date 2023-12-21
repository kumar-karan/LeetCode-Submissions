/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        // Sum of nodes bw low and high including low and high 

        /*
        Case 1: Value in range -> add that node and call RE for left and right
        Case 2 : Value < low  -> left me to jayenge ni 
                    RE call right Subtree

        Case 3 : Value > high -> badi value pe ni jayenge 
                    RE call left subtree
        */

        if(!root )  return 0;
        int ans = 0;

        bool wasInRange = false;
        if(root -> val >= low && root -> val <= high)
        {   wasInRange = true;
            ans+= root-> val;
        }

        if(wasInRange)
        {
            ans += rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);

        }
        else if(root->val < low)
            ans+= rangeSumBST(root->right,low,high);
        else if(root->val > high)
            ans+= rangeSumBST(root->left,low,high);


        return ans;
    }
};