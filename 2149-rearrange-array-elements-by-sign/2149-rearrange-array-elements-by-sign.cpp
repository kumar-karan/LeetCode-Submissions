class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> ans;
        if(nums.size() == 0)    return ans;
        vector<int> pos;
        vector<int> neg;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] < 0)
            {
                neg.push_back(nums[i]);
            }
            else
                pos.push_back(nums[i]);
        }
        reverse(begin(neg), end(neg));
        reverse(begin(pos), end(pos));
        
        for(int i=1; i<= nums.size(); i++)
        {
            if(i%2 != 0)
            {
                ans.push_back(pos.back());
                pos.pop_back();
            }
            else
            {
                ans.push_back(neg.back());
                neg.pop_back();
            }
        }
        return ans;
    }
};