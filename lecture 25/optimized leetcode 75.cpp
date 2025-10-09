#include <iostream>
#include <vector>
using namespace std;
                        
                    // optimized approach

void sortArray(vector<int> &nums) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Count number of 0s, 1s, and 2s
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) count0++;
        else if (nums[i] == 1) count1++;
        else if (nums[i] == 2) count2++;
    }

    // Overwrite the array based on counts
    int idx = 0;
    for (int i = 0; i < count0; i++) nums[idx++] = 0;
    for (int i = 0; i < count1; i++) nums[idx++] = 1;
    for (int i = 0; i < count2; i++) nums[idx++] = 2;
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    sortArray(nums);

    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
