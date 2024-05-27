class Solution {
public:
    int maxProfit(vector<int>& nums) 
    {
        int n= nums.size();
        /* TLE MAREGA 
        int diff =0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int diff1 = nums[j]-nums[i];
                if(diff1 > diff)
                    diff = diff1;
            }
        }
        return diff;

        */
        int minel = INT_MAX;
        int maxout =0;
        for(int i=0; i<n; i++)
        {
            minel = min(minel, nums[i]);
            maxout = max (maxout, nums[i] - minel);
        }

        return maxout;

    }
};