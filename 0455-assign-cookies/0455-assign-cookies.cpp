class Solution {
public:
    int findContentChildren
    (vector<int>& g, vector<int>& s) 
    {
        int c=0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int ls=0, rg=0;

        while(ls < s.size() && rg < g.size())
        {
            if(s[ls] >= g[rg])
            {
                c++;
                ls++; rg++;
            }
            else
            {
                ls++;
            }
        }
        return c;
    }
};