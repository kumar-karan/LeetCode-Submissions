//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
const int MOD = 1e9 + 7;
	public:
	int solve(int index, int sum, int nums[], vector<vector<int>> &dp)
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
	int perfectSum(int arr[], int n, int sum)
	{
	    int target = sum;
	    vector<vector<int>> dp(n, vector<int>(target+1, -1));
	    
        return solve(n-1, target, arr, dp);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends