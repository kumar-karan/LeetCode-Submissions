class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        //sort(nums.begin(), nums.end());

        /*
        int n= nums.size();
        int c0=0, c1 =0, c2=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i] == 0) c0++;
            if(nums[i] == 1) c1++;
            if(nums[i] == 2) c2++;
        }
        

        for(int i=0; i<c0; i++) nums[i] = 0;
        for(int i=c0; i<c0+c1; i++) nums[i] = 1;
        for(int i=c0+c1; i<c0+c1+c2; i++) nums[i] = 2;
        */
        int n = nums.size();
        int low =0, mid =0, high = n-1;

        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid ++;
            }
            else if(nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high --;
            }
        }

    }
};