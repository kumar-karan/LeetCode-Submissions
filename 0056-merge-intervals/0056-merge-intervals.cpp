class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        int n = intervals.size();
        vector<vector<int>> ans;
        if(n==0) return ans;

        sort(intervals.begin(), intervals.end());
        
        for(auto x : intervals)
        {
            
            if(ans.empty())
            {
                ans.push_back(x);
            }
            else if(ans.back()[1] >= x[0])
            {
                vector<int> temp;
                temp.push_back(ans.back()[0]);
                temp.push_back(max(ans.back()[1], x[1]));
                ans.pop_back();
                ans.push_back(temp);
            }
            else
            ans.push_back(x);
        }
        return ans;      
    }
};