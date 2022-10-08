/*
 * @lc app=leetcode.cn id=1800 lang=cpp
 *
 * [1800] 最大升序子数组和
 */

// @lc code=start
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        dp[0]=nums[0];
        int max=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
              dp[i]=dp[i-1]+nums[i];
             }
            else{
              dp[i]=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(dp[i]>max){
            max=dp[i];}
        }
        return max;
            

    }
};
// @lc code=end

