/*
 * @lc app=leetcode.cn id=1662 lang=cpp
 *
 * [1662] 检查两个字符串数组是否相等
 */

// @lc code=start
using namespace std;
#include<iostream>
#include<vector>
#include<string>
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        return join(word1)==join(word2);

    }
    string join(vector<string>str){
        string res;
        for(auto s :str){
            res+=s;
        }
        return res;
    }
};
// @lc code=end

