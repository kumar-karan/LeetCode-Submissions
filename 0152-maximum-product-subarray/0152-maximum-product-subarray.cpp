class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n= nums.size();
        int maxi = INT_MIN;
        // for(int i=0; i<n; i++)
        // { int prod = 1;
        //     for(int j=i; j<n; j++)
        //     {
                
        //         prod*= nums[j]; // yha mistake hui thi
        //         maxi= max(maxi, prod);
        //     }
        // }
        // return maxi;

/*
        int prod=1;
        for(int i=0; i<n; i++)
        {
            prod *= nums[i];
            maxi= max(prod,maxi);
            if(prod <= 0)
                prod = 1;
        }
        return maxi;
        
*/

        int pre =1, suff=1;
        for(int i=0; i<n;i++)
        {
            if(pre == 0) pre =1;
            if(suff == 0) suff =1;

            pre*=nums[i];
            suff*=nums[n-i-1];

            maxi = max(maxi, max(pre,suff));
        }

        return maxi;
    }
};