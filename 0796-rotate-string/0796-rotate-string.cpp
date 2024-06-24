class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        int n =s.size(); int m = goal.size();
        if(n != m)  return false;
        if(s == goal) return true;

        for(int i=0; i<n-1; i++)
        {
            char ch = s[0];
            for(int j=0; j<n-1; j++)
                s[j] = s[j+1];

            s[n-1] = ch;
            if(s == goal) return true;
        }
        return false;

    }
};