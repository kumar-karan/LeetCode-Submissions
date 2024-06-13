//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
//   int solve(int index, int price[], int n)
//   {
//     if(index == 0)
//     {
//         return n* price[0];      
//     }
//     int notTake = 0 + solve(index-1, price, n);
//     int take = INT_MIN;
//     int rodLength= index+1;
//     if(rodLength <= n)
//         take = price[index] + solve(index, price, n-rodLength);
//     return max(take, notTake);
//   }
    int cutRod(int price[], int n) 
    {
        int index = n;
        vector<vector<int>> dp(n, vector<int>(n+1,0));
        for(int m=0; m<=n; m++)
        {
            dp[0][m] = m* price[0];        
        }
         for (int index = 1; index < n; ++index) {
            for (int length = 0; length <= n; ++length) {
                int notTake = 0+dp[index - 1][length];
                int take = INT_MIN;
                int rodLength = index + 1;
                if (rodLength <= length) {
                    take = price[index] + dp[index][length - rodLength];
                }
                dp[index][length] = max(take, notTake);
            }
        }
        
        return dp[n-1][n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends