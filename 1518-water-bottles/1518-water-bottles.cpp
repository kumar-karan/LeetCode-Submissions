class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) 
    {
        int ans =numBottles;
        int c=0, r = 0;
        while(numBottles >= numExchange)
        {
            r = numBottles/numExchange;
            c = numBottles%numExchange;
            ans = ans + r;
            numBottles = c + r;
        }
        return ans;
        
    }
};