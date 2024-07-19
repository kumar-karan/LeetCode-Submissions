class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<vector<int>>& ans,
               vector<int>& temp, int sum, int index) {
        if (index >= candidates.size()) 
        return;
        if (sum == target) 
        {
            ans.push_back(temp);
            return;
        }
        if (sum > target)
            return;
        temp.push_back(candidates[index]);
        solve(candidates, target, ans, temp, sum + candidates[index], index);
        temp.pop_back();
        solve(candidates, target, ans, temp, sum, index + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum = 0;
        solve(candidates, target, ans, temp, sum, 0);

        return ans;
    }
};