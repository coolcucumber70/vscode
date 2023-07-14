/*
 * @lc app=leetcode.cn id=1768 lang=cpp
 *
 * [1768] 交替合并字符串
 */

// @lc code=start
#include<string>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        int n1=word1.size();
        int n2=word2.size();
        int p1=0,p2=0;
        while((p1<n1)&&(p2<n2)){
            result+=word1[p1];
            result+=word2[p2];
            p1++;
            p2++;
        }
        if(p1==n1){
            result+=word2.substr(p2,n2);
        }
        else{
            result+=word1.substr(p1,n1);
        }
        return result;

    }
};
// @lc code=end
