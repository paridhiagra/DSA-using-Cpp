#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        // dp[i] stores all valid combinations that sum to i
        std::vector<std::vector<std::vector<int>>> dp(target + 1);
        
        // Base case: There is 1 way to form sum 0 (an empty combination)
        dp[0].push_back({});

        // Outer loop over candidates prevents duplicate combinations (permutations)
        for (int candidate : candidates) {
            for (int sum = candidate; sum <= target; ++sum) {
                // Look at all existing combinations for (sum - candidate)
                for (auto combo : dp[sum - candidate]) {
                    combo.push_back(candidate);
                    dp[sum].push_back(combo);
                }
            }
        }

        return dp[target];
    }
};