class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int,int>mp;
        vector<int> ans;
        for(auto x: nums)
        {
            mp[x]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for(auto x: mp)
        {
            pq.push(make_pair(x.second, x.first));
            if(pq.size() > k)   pq.pop();
        }

        while(!pq.empty())
        {
            pair<int,int> temp = pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }

        return ans;
    }
};