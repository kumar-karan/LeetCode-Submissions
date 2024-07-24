//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimizeCost(vector<int>& height, int n, int k) 
    {
        int ans= INT_MAX;
        int jmp=0;
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0; // Starting point, cost is 0
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<=k; j++)
            {
                if(i-j >=0)
                {
                    dp[i] = min(dp[i], dp[i - j] + abs(height[i] - height[i - j]));
                }
            }
        }
        
        return dp[n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends