/*
 * @lc app=leetcode.cn id=1608 lang=cpp
 *
 * [1608] 特殊数组的特征值
 */
// @lc code=start
using namespace std;
#include<iostream>
#include<vector>
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0, r = n;
        while (l < r) {
            int m = (l+r)/2;
            if (nums[m] >= n-m) {
                if (m && nums[m-1] >= n-m){
                    r = m;

                }
                else{
                    return n-m;
                    }
            }
            else l = m+1;
        }
        return -1;
    }
};
// @lc code=end

