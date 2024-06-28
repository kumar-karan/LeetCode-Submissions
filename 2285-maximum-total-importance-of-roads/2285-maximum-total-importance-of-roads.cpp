#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        // Step 1: Create a map to store the degree of each city
        unordered_map<int, int> degree;
        
        // Step 2: Populate the degree map
        for (const auto& road : roads) {
            degree[road[0]]++;
            degree[road[1]]++;
        }
        
        // Step 3: Create a vector of pairs (degree, city) and sort by degree in descending order
        vector<pair<int, int>> degree_city;
        for (int i = 0; i < n; ++i) {
            degree_city.push_back({degree[i], i});
        }
        sort(degree_city.rbegin(), degree_city.rend());
        
        // Step 4: Assign importance values to cities based on sorted order
        unordered_map<int, int> importance;
        for (int i = 0; i < n; ++i) {
            importance[degree_city[i].second] = n - i;
        }
        
        // Step 5: Calculate the total importance by summing up the importance values of connected cities for each road
        long long ans = 0;
        for (const auto& road : roads) {
            ans += importance[road[0]] + importance[road[1]];
        }
        
        return ans;
    }
};
