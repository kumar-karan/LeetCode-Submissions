class Solution {
public:
    bool solve(string s, int i, int j)
    {
        if(i>=j)    return true;

        if(s[i] == s[j]) return solve(s,i+1,j-1);

        return false;
    }
    string longestPalindrome(string s) 
    {
        int maxi = 0;
        int n = s.size();
        int sp=0;

        for(int i=0; i< n; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(solve(s,i,j) == true)
                {
                    if(j-i+1 > maxi)
                    {
                        maxi = j-i+1;
                        sp=i;
                    }
                }
            }
        }

        return s.substr(sp,maxi);
    }
};