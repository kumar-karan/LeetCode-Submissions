class Solution {
public:
    int myAtoi(string s) 
    {
        int n = s.size(); 
        if(n==0) return 0;

        int sign = 1;
        long ans=0;
        int i=0;
        while(i<n && s[i]== ' ')
        {
            i++;
        }

        if(i < n && s[i] == '-') 
        {
            sign = -1;
            i++;
        }          
        else if(i < n && s[i] == '+')
        {
            sign = 1;
            i++;
        }
        while(i<n&& isdigit(s[i]))
        {
            ans = ans* 10 + (s[i] -'0');
            if(sign == -1 && -1* ans < INT_MIN) return INT_MIN;
            if(sign == 1 && 1* ans > INT_MAX) return INT_MAX; 
            i++;
        }

        return (int)(ans*sign);
    }
};