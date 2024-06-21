class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        vector<pair<char, int>> v;
        for(auto ch: s)
        {
            if(v.size() == 0 || ch != v.back().first)
                v.push_back({ch,1});
            else 
                v.back().second++;
            
            if(v.back().second == k)
                v.pop_back();
        }
        string res="";
        for(auto x: v)
        {
            res.append(x.second, x.first);
        }
        return res;
    }
};