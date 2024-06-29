class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        map<char,int> mp;
        int l =0,r=0,maxi =0;
        int n = s.size();
        if(s.size() == 0 || s.size() == 1) return s.size();
        while(r<n)
        {
            if(mp[s[r]] >-1)
            {
                if(mp[s[r]] >=l)
                {
                    l = mp[s[r]]+1;
                }
            }

            int len =r-l+1;
            maxi = max(maxi,len);

            mp[s[r]] = r;
            r++;
        }
        return maxi;
    }
};