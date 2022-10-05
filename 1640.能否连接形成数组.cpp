/*
 * @lc app=leetcode.cn id=1640 lang=cpp
 *
 * [1640] 能否连接形成数组
 */

// @lc code=start
#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
class Solution
{
public:
    //这个题目的本质就是查看piece中的数组是不是子串/
    bool canFormArray(vector<int> &arr, vector<vector<int>> &pieces)
    {
        unordered_map<int, int> hash;
        for (int i = 0; i < pieces.size(); i++)
        {
            hash[pieces[i][0]] = i;
        }
        for (int i = 0; i < arr.size();)
        {
            if (hash.find(arr[i]) == hash.end())
            {
                return false;
            }
            for (int x : pieces[hash[arr[i]]])
            {
                if (x == arr[i])
                {
                    i++;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end
