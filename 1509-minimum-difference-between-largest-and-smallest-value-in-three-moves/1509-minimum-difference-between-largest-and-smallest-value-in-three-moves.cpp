class Solution {
public:
    int minDifference(vector<int>& nums) 
    {
        int n = nums.size();
        if( n<= 4)  return 0;

        sort(nums.begin(), nums.end());

        return nums[n-3]-nums[0];
    }
};
