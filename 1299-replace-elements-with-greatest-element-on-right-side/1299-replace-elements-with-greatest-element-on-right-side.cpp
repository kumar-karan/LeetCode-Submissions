class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(); // Determine the size of the input vector 'arr'
        vector<int> v(n); // Create a new vector 'v' of the same size as 'arr' to store modified elements
        
        //int t = -1; // Initialize 't' to -1 (used for last element)
        v[n - 1] = -1; // Set the last element of 'v' to -1 as specified
        
        // Loop through 'arr' from second-to-last element down to the first element
        for (int i = n - 2; i >= 0; i--) {
            // Assign the maximum value between the next element in 'v' and the next element in 'arr'
            v[i] = max(v[i + 1], arr[i + 1]);
        }
        
        return v; // Return the modified vector 'v'
    }
};
