class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int five =0;
        int ten =0;
        int twen =0;
        bool ans;

        for(auto x: bills)
        {
            if(x == 5)
                five++;
            else if(x == 10)
            {
                ten++;
                if(five >0) 
                    five--;
                else
                    return false;
            }
            else if(x == 20)
            {
                twen++;
                if(ten > 0)
                {
                    ten--;
                    if(five >0) five --;
                    else return false;
                }
                else 
                if(five >= 3)
                    five = five -3;
                else return false;
            }
        }
        return true;
    }

};