class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int l=0, r=0, maxi=0, zero=0;

        while(r<n)
        {
            int len =0;
            if(nums[r] == 0)
                zero++;
            if(zero<=k)
            {
                len = r-l+1;
                maxi = max(maxi, len);
            }
            while(zero > k)
            {
                if(nums[l] == 0) zero--;
                l++;
            }
            if(maxi < n-l)
            r++;
            else return maxi;
        }
        return maxi;   
    }
};