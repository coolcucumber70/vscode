/*
 * @lc app=leetcode.cn id=856 lang=cpp
 *
 * [856] 括号的分数
 */

// @lc code=start
#include<iostream>
using namespace std;
class Solution {
public:
    int scoreOfParentheses(string s) {
        if(s=="")return 0;
        if(s=="()")return 1;
        int count=0,i;
        for(i=0;i<s.size();i++){
            if(s[i]=='('){
                count+=1;
            }
            else{
                count-=1;
            }
            if(count==0){
                break;
            }
        }
        if(i==s.size()-1){
            return 2*(scoreOfParentheses(s.substr(1,s.size()-2)));
        }
        else{
            return scoreOfParentheses(s.substr(0,i+1))+scoreOfParentheses(s.substr(i+1,s.size()-1-i));
        }
    }
};
// @lc code=end

