/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] 使用最小花费爬楼梯
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n);
        dp[0]=cost[0];
        dp[1]=min(cost[0],cost[1]);
        for(int i=2;i<n;i++){
            dp[2]=min(dp[])

        }


    }
};
// @lc code=end

