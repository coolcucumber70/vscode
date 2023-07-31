/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=std::accumulate(nums.begin(), nums.begin()+k, 0);
        int maxsum=sum;
        for(int i=1;i<nums.size()-k+1;i++){
            sum=sum-nums[i-1]+nums[i+k-1];
            maxsum =max(maxsum,sum) ;
        }
        return double(maxsum)/k;
    }
};
// @lc code=end

