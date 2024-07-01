class Solution {
public:
    int solve(vector<int>& nums, int k)
    {
        int n = nums.size();
        int l=0, r=0, maxi =0;
        unordered_map<int,int> mp;

        while(r<n)
        {
            mp[nums[r]] ++;
            while(mp.size() >k)
            {
                mp[nums[l]]--;
                if(mp[nums[l]] == 0)
                    mp.erase(nums[l]);
                l++ ;
            }
            maxi = maxi + (r-l+1);
            r++;
        }
        return maxi;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        return solve(nums,k) - solve(nums, k-1);
    }
};