class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int freq[26]={0};

        for(int i=0; i<s.size(); i++)
        {
            freq[s[i]-97]++;
        }
        for(int i=0; i< t.size(); i++)
        {
            freq[t[i]-97]--;
        }

        for (int i=0; i<26; i++)
        {
            if (freq[i]!=0)
            return false;
        }
        return true;
    }
};