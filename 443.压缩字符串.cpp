/*
 * @lc app=leetcode.cn id=443 lang=cpp
 *
 * [443] 压缩字符串
 */

// @lc code=start
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size(), count = 1, idx = 1;
        char temp = chars[0];
        for (int i = 1; i < n; ++i) {
            if (chars[i] == temp) count++;
            else {
                if (count > 1) {
                    // 或者短除法然后反转，比如 "12" ，短除法得到的是 "21"
                    string str = to_string(count);
                    for (char c : str) chars[idx++] = c;
                }
                chars[idx++] = temp = chars[i];
                count = 1;
            }
        }
        if (count > 1) {
            string str = to_string(count);
            for (char c : str) chars[idx++] = c;
        }
        return idx;
    }
};
// @lc code=end

