/*
 * @lc app=leetcode.cn id=777 lang=cpp
 *
 * [777] 在LR字符串中交换相邻字符
 */

// @lc code=start
#include <iostream>
using namespace std;
class Solution
{
public:
    bool canTransform(string start, string end)
    {
        if (start.size() != end.size())
            return false;
        int l = 0, r = start.size() - 1;
        while (l < r)
        {
            if (start[l] != end[l]&&isswap(start[l], start[l + 1]))
            {
                
                swap(start[l], start[l + 1]);
            }
            if (start[l] == end[l])
            {
                l++;
            }
            else
            {
                return false;
            }
            if (start[r] != end[r]&&isswap(start[r], start[r - 1]))
            {
                swap(start[r], start[r - 1]);
            }
            if (start[r] == end[r])
            {
                r--;
            }
            else
            {
                return false;
            }
        }
        if (l == r && start[l] != end[l])
        {
            return false;
        }
        return true;
    };
    bool isswap(char a,char b){
        return((a=='L'&&b=='X')||(a=='X'&&b=='L')||(a=='R'&&b=='X')||(a=='X'&&b=='R'));

    }
};
// @lc code=end
