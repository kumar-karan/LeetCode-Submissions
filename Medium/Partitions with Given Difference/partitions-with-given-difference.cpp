//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  const int MOD = 1e9 + 7;
    int solve(int index, int sum, vector<int>&nums, vector<vector<int>> &dp)
    {
        if(index == 0)
        {
            if(sum == 0 && nums[0] == 0) return 2;
            if(sum ==0 || sum == nums[0]) return 1;
            return 0;
        }
        if(dp[index][sum] != -1)    return dp[index][sum];
        int notTake = solve(index-1, sum, nums, dp);
        int take = 0;
        if(nums[index] <= sum) take = solve(index-1, sum-nums[index], nums, dp);
        
        return dp[index][sum] = (notTake+ take)%MOD;
    }
    int countPartitions(int n, int d, vector<int>& arr) 
    {
        int totSum = 0;
        for(auto &i:arr)
            totSum += i;
            
        if(totSum -d <0 || (totSum-d)%2)    return 0;
        int target = (totSum-d)/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(n-1, target, arr, dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends