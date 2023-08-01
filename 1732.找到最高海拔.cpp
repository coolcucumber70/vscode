/*
 * @lc app=leetcode.cn id=1732 lang=cpp
 *
 * [1732] 找到最高海拔
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <algorithm>
class Solution
{
public:
    int largestAltitude(std::vector<int> &gain)
    {
        int sum = 0,res=0;
        std::for_each(gain.begin(), gain.end(), [&res,&sum](int num)
                      {
        sum += num;
        res=std::max(sum,res);
        });
        return res;
    }
};
// @lc code=end
