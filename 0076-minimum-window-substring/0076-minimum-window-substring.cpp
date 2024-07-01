class Solution {
public:
    string minWindow(string s, string t) 
    {  
        int n = s.size();
        int m = t.size();
        if (n < m) return "";
        int l=0, r=0, minLen = 1e9, cnt =0, sIndex = -1;

        map<char,int> mp;
        for(int i=0; i<m; i++)
        {
            mp[t[i]]++;
        }
        while(r<n)
        {
            if(mp[s[r]] > 0)
                cnt++;
            mp[s[r]] --;
            while(cnt == m)
            {
                if(r-l+1 < minLen)
                {
                    minLen = r-l+1;
                    sIndex = l;
                }
                mp[s[l]] ++;
                if(mp[s[l]] > 0 )
                    cnt--;
                l++;
            }
            r++;
        }
        
        return sIndex == -1 ? "" : s.substr(sIndex, minLen);
    }
};