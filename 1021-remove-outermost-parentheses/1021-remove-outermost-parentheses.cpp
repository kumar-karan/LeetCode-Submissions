class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        stack<char> st;
        if(s == "") return s;
        
        string ans = "";
        int c=0;
        for(auto ch: s)
        {
            if(ch == ')') c--;
            if(c != 0)
                ans += ch;
            if(ch == '(') c++;
        }
        return ans;



        /*
        for(auto ch: s)

        {
            if(st.empty())
                st.push(ch);
            else if(!st.empty())
            {
                if(ch == '(')
                {
                    ans+= ch;
                    st.push(ch);
                }
                if(ch == ')')
                {
                    if(st.size()!= 1)
                        ans+= ch;
                    st.pop();
                }
                
            }
            
            
        }
        return ans;
*/
    }
};