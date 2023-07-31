/*
 * @lc app=leetcode.cn id=1679 lang=cpp
 *
 * [1679] K 和数对的最大数目
 */

// @lc code=start
#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1;
        int res = 0;
        while (left < right) {
            if (nums[left] + nums[right] == k) {
                res++;
                left++;
                right--;
            } else if (nums[left] + nums[right] > k) {
                right--;
            } else {
                left++;
            }
        }
        return res;
    }
};
// @lc code=end

