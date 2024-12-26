class Solution {
public:

    int solve(vector<int>&nums, int target, int index,vector<vector<int>> &dp)
    {
        if(index == 0)
        {
            if(target == 0 && nums[0] == 0) return 2;
            if(nums[0] == target ||target == 0) return 1;
            return 0;
        }
        if(dp[index][target] != -1) return dp[index][target];
        int notTake = solve(nums, target, index-1,dp);
        int take = 0;
        if(nums[index] <= target)
            take = solve(nums,target-nums[index], index-1,dp);
            
        return dp[index][target]= take+notTake;
    }
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int totSum =0;
        for(auto i:nums)
            totSum+= i;
        
        int t= (totSum-target)/2;
        if(totSum -target <0 || (totSum-target)%2)    return 0;
        vector<vector<int>> dp(n,vector<int>(t+1, -1));
        return solve(nums, t, n-1,dp);
    }
};