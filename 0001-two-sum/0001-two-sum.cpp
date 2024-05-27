class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) 
    {
        /* TC = O(n2)
        vector<int> ans;
        int n= arr.size();
        for(int i=0; i<n; i++)
        {
            int t= target - arr[i];
            for(int j=i+1; j<n; j++)
            {
                if(t == arr[j])
                {
                    // ans.push_back(i);
                    // ans.push_back(j);
                    return {i,j};
                }    
            }
        }
        // return ans;
        return{};

        */


        map<int,int> mpp;
        int n= arr.size();
        for(int i=0; i<n; i++)
        {
            int a= arr[i];
            int more = target - a;
            if(mpp.find(more) != mpp.end())
            {
                return {mpp[more],i};
            }
            mpp[a]= i;

        }
        return {};

 


        /*

        for(int i=0; i<n; i++)
        {
            
        }

        int n= arr.size();
        int left=0, right= n-1;
        while(left<right)
        {
            int sum = arr[left] + arr[right];
            if(sum < target)
                left++;
            else right --;
        }
        */
    }
};