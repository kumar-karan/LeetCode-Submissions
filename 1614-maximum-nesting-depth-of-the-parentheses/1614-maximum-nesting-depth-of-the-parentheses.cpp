class Solution {
public:
    int maxDepth(string s) 
    {
        stack<char> st;
        int count = 0;
        int maxi= 0;
        for(auto ch: s)
        {
            // if(st.empty())
            //     maxi =0;
            if(ch == '(')
            {
                count++;
                maxi= max(maxi, count);
            }
            else if(ch == ')' )
            {  
                count--;  
            }
        }

        return maxi;
    }
};