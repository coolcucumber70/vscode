/*
 * @lc app=leetcode.cn id=2341 lang=cpp
 *
 * [2341] 数组能形成多少数对
 */

// @lc code=start
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, bool> cnt;
        int res = 0;
        for (int num : nums) {
            if (cnt.count(num)) {
                cnt[num] = !cnt[num];
            } else {
                cnt[num] = true;
            }
            if (!cnt[num]) {
                res++;
            }
        }
        return {res, (int)nums.size() - 2 * res};
    }
};
// @lc code=end

