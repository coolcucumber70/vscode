/*
 * @lc app=leetcode.cn id=334 lang=cpp
 *
 * [334] 递增的三元子序列
 */

// @lc code=start
#include <deque>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        deque<int> que;
        int n = nums.size();
        int tmp = 1000;
        for (int i = 0; i < n; i++)
        {
            if (que.size() == 3)
            {
                if (que.at(0) < que.at(1) && que.at(1) < que.at(2))
                {
                    return true;
                }
                if (que.back() > tmp)
                {
                    return true;
                }
                tmp = que.back();
                que.pop_front();
            }
            if (que.empty() || (nums[i] > que.back()))
            {
                que.push_back(nums[i]);
            }
            else
            {

                if (que.back() > que.front())
                {
                    tmp = que.back();
                }
                que.pop_back();
                que.push_back(nums[i]);
            }
        }
        if (que.size() == 3)
            {
                if (que.at(0) < que.at(1) && que.at(1) < que.at(2))
                {
                    return true;
                }
                if (que.back() > tmp)
                {
                    return true;
                }

            }
        return false;
    }
};
// @lc code=end
