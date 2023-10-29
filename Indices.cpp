#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndices;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndices.find(complement) != numIndices.end()) {
            return {numIndices[complement], i};
        }
        numIndices[nums[i]] = i;
    }

    // If no solution is found, return an empty vector or throw an exception.
    return {};
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);

    if (result.size() == 2) {
        std::cout << "Output: [" << result[0] << ", " << result[1] << "]\n";
    } else {
        std::cout << "No solution found.\n";
    }

    return 0;
}
