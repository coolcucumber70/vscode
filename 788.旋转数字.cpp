/*
 * @lc app=leetcode.cn id=788 lang=cpp
 *
 * [788] 旋转数字
 */

// @lc code=start
#include <iostream>
#include <string.h>
using namespace std;
class Solution
{
public:
    //这个题目归根到底只能出现018 25 69 其中2569这四个数，是必须出现爱的
    //根据位数来确定是不是了9999的4位数，三位数，二位数
    int rotatedDigits(int n)
    {
        int res=0;
        for (int i = 0; i <=n; i++)
        {
            string str = to_string(i);
            bool valid = true, diff = false;
            for (char c : str)
            {
                if (check[c - '0'] == 1)
                {
                    diff = true;
                }
                else if (check[c - '0'] == -1)
                {
                    valid = false;
                }
            }
            if(valid&&diff){
                res++;
            }
        }
        return res;
    }

private:
    static constexpr int check[10] = {0, 0, 1, -1, -1, 1, 1, -1, 0, 1};
};
// @lc code=end
