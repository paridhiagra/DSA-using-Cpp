#include <iostream>
#include <vector>
using namespace std;

// LeetCode problem : Single Number (136)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans = ans ^ val;   // XOR trick
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {4, 1, 2, 1, 2};

    // Call the function
    int result = sol.singleNumber(nums);

    // Print output
    cout << "Single number is: " << result << endl;

    return 0;
}
