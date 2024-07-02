class Solution {
public:
    bool checkValidString(string s) 
    {
        int min=0, max =0;

        for(auto x: s)
        {
            if(x == '(')
            {
                max++;
                min++;
            }
            else if(x == ')')
            {
                min --;
                max--;
            }
            else
            {
                max++;
                min--;
            }

            if(min < 0) min =0;
            if(max < 0) return false;
        }


        return (min ==0);
    }
};