class Solution {
public:
    int searchInsert(vector<int>& arr, int target) 
    {
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] == target)
                return i;
            if(arr[i] > target)
                return i;
        }

        return arr.size();
    }
};