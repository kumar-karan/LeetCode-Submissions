class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string result = "";
        int n1 = word1.size();
        int n2 = word2.size();
        int small = min(n1,n2);
        for(int i=0; i<small; i++)
        {
            result += word1[i];
            result += word2[i];
        }

        if(n1 < n2)
        {
            for(int i=n1; i<n2; i++)
            {
                result += word2[i];
            }
        }
        if(n2 < n1)
        {
            for(int i=n2; i<n1; i++)
            {
                result += word1[i];
            }
        }

        return result;
    }
};