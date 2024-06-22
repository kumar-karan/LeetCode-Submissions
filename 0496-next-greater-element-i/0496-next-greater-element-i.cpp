class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector <int> ans2(nums2.size());
        vector <int> ans1(nums1.size());
        stack<int> s;
        s.push(-1);

        for(int i =nums2.size()-1; i>=0 ; i--)
        {
            int curr = nums2[i];

            while(curr >= s.top() && s.top() != -1)
            {
                s.pop();
            }
            ans2[i] = s.top();
            s.push(curr);
        }

        for(int i = 0; i< nums1.size(); i++)
        {
            for(int j = 0; j< nums2.size(); j++ )
            {
                if(nums1[i] == nums2[j])
                {
                    ans1[i] = ans2[j];
                }
                
            }
        }

        return ans1;
        
    }
};