class Solution {
public:
    string removeDuplicates(string s) 
    {
        string ans ="";
        stack<char> st;
        for(auto ch:s)
        {
            if(st.empty() || ch !=st.top()) st.push(ch);
            else if(ch == st.top())  st.pop();
        }
        if(st.empty())  return ans;

        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};