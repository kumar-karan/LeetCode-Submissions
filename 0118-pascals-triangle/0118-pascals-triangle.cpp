class Solution {
public:

// Formula is for an element R-1 c C-1  or ans*(R-C)/ C

    vector<int> generaterow(int numRows)
    {
        long long ans =1 ;
        vector<int> row(numRows, 1);
        for(int i=1 ; i< numRows; i++)
        {
            ans *= numRows-i;
            ans /= i;
            // row.push_back(ans);
            row[i] = ans;
        }
        return row;
        
    }

    vector<vector<int>> generate(int numRows) 
    {
        int n = numRows;
        vector<vector<int>> tri;
        for(int i=1; i<=n; i++ )
        {
            vector<int> temp;
            temp = generaterow(i);

            tri.push_back(temp);
        }
        return tri;
    }
};