/*
 * @lc app=leetcode.cn id=1493 lang=cpp
 *
 * [1493] 删掉一个元素以后全为 1 的最长子数组
 */

// @lc code=start
using namespace std;
#include<vector>
#include<iostream>
#include <algorithm>
#include<queue>
class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int res = 0, zero = 0,left=0;
        int n=nums.size();
        queue<int>q;
        for (int right = 0; right <n; ++right)
        {
            if (nums[right] == 0)
            {
                zero++;
                q.push(right);
            }
            if (zero == 2){

                res = max(res, right - left-1 );
                left=q.front()+1;
                q.pop();
                zero--;
            }      
        }
        if(zero==1){
            res=max(res,n-1-left);
        }
        else if (zero==0){
            res=n-1;
        }
        return res;
    }
};
// @lc code=end
