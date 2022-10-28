/*
 * @lc app=leetcode.cn id=907 lang=cpp
 *
 * [907] 子数组的最小值之和
 */

// @lc code=start
using namespace std;
#include <iostream>
#include <vector>
#include <stack>
class Solution
{
public:
    int sumSubarrayMins(vector<int> &arr)
    {
        int n = arr.size();
        stack<int> stkl, stkr;
        vector<int> left(n, 0);
        vector<int> right(n, 0);
        for (int i = 0; i < n; i++)
        {
            while (!stkl.empty() && arr[i] <= arr[stkl.top()])
            {
                stkl.pop();
            }
            if (stkl.empty())
                left[i] = i+1;
            else
                left[i] = i - stkl.top();
            while (!stkr.empty() && arr[n - 1 - i] < arr[stkr.top()])
            {
                stkr.pop();
            }
            if (stkr.empty())
                right[n - 1 - i] = i+1;
            else
                right[n - 1 - i] = stkr.top() - (n - 1 - i);
            stkl.push(i);
            stkr.push(n - 1 - i);
        }
        long long ans = 0;
        long long mod = 1e9 + 7;
        for (int i = 0; i < n; i++) {
            ans = (ans + (long long)left[i] * right[i] * arr[i]) % mod; 
        }
        return ans;
    }
};
// @lc code=end
