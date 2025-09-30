// Given an array of integers nums and an integer target, 
// return indices of the two numbers such that they add up to target.

#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target);

int main() {
	std::vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;

	std::vector<int> result = twoSum(nums, target);

	for (int num : result) {
		std::cout << num;
	}

	return 0;
}

std::vector<int> twoSum(std::vector<int>& nums, int target) {
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; i < nums.size(); j++) {
			if (nums[i] + nums[j] == target) {
				return { i, j };
			}
		}
	}
	return {};
}