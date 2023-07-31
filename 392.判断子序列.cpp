/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列:思路就是双指针，很简单的题
 */

// @lc code=start
#include<string>
using namespace std;
#include<iostream>
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j;
        for(i=0,j=0;i<s.size()&&j<t.size();j++){
            if(s[i]==t[j])i++;
        }
        if(i==s.size())return true;
        else return false;

    }
};
// @lc code=end

