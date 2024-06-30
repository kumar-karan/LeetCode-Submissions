class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int n = s.size();
        int maxi =0, l=0, r=0, maxf=0;
        map<char, int> mp;
        while(r<n)
        {
            mp[s[r]]++;
            maxf = max(maxf, mp[s[r]]);
            if((r-l+1) - maxf > k)
            {
                mp[s[l]]--;
                // maxf = 0;
                // for(char j = 'A'; j <= 'Z'; j++)
                //     maxf = max(maxf,mp[j]);
                l++;
            }
            if((r-l+1) - maxf <= k)
            {
                maxi = max(maxi, r-l+1);
            }
                r++;
        }

        return maxi;
    }
};