class Solution {
public:
    int passThePillow(int n, int time) 
    {
        int flag = false;
        int i=0;
        while(time > 0)
        {
            if(i == n-1)
                flag = true;
            else if(i == 0)
                flag = false;
            if(time == 0)
                return i;

            if(flag)
                i--;
            else
                i++;
            time --;
        }

        return i+1;
    }
};