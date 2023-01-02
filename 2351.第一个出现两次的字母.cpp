/*
 * @lc app=leetcode.cn id=2351 lang=cpp
 *
 * [2351] 第一个出现两次的字母
 */

// @lc code=start
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> seen;
        for (char ch: s) {
            if (seen.count(ch)) {
                return ch;
            }
            seen.insert(ch);
        }
        // impossible
        return ' ';
    }
};

// @lc code=end

