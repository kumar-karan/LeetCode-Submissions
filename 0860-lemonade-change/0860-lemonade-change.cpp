class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int five =0;
        int ten =0;
        int twen =0;
        bool ans;

        for(auto bill: bills)
        {
            if(bill == 5)
                five++;
            else if(bill == 10)
            {
                if(five ==0) return false;
                five--;
                ten++;
            }
            else if(bill == 20)
            {
                if(five >0 && ten>0)
                {
                    ten--;
                    five--;
                }
                else if(five>=3)
                    five = five -3;
                else 
                return false;
                twen ++;
            }
        }
        return true;
    }

};