class Solution {
public:
    void solve(int index, vector<int>& arr, int target, vector<int>&ds, vector<vector<int>>&ans)
    {
        if(target == 0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i= index; i<arr.size();i++)
        {
            if(i>index && arr[i] == arr[i-1]) continue;
            if(arr[i] > target) break;

            ds.push_back(arr[i]);
            solve(i+1,arr, target-arr[i],ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) 
    {
        sort(c.begin(), c.end());
        vector<int> ds;
        vector<vector<int>>ans;
        solve(0, c, target, ds, ans);
        return ans;
    }
};