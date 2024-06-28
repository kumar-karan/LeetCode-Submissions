//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) 
    {
        map<int,int> mp;
        vector<int> ans;
        for(auto x: nums)
            mp[x]++;
            
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        for(auto x: mp)
        {
            pq.push(make_pair(x.second, x.first));
            if(pq.size() > k)
                pq.pop();
        }
        
        while(!pq.empty())
        {
            pair<int,int> temp = pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends