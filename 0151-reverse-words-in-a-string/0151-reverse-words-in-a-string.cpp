class Solution {
public:
    string reverseWords(string s) 
    {
        int i=0;
        string ans = "";
        int n = s.length();

        while(i<n)
        {
            while(s[i] == ' ')
            {
                i++;
            }
            if(i >= n) break;
            int j= i+1;
            while(j<n && s[j]!=' ') j++;
            string sub = s.substr(i,j-i);

            if(ans == "") ans = sub;
            else ans = sub + " " + ans;

            i = j+1;
        }

        return ans;
    }
};

// ans =blue is sky the