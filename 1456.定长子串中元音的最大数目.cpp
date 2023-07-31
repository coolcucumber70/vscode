/*
 * @lc app=leetcode.cn id=1456 lang=cpp
 *
 * [1456] 定长子串中元音的最大数目
 */

// @lc code=start
#include<iostream>
using namespace std;
#include<string>
class Solution {
public:
    int maxVowels(string s, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            if(inaeiou(s[i]))sum++;
        }
        int maxsum=sum;
        int n=s.size();
        for(int i=1;i<n-k+1;i++){
            sum=sum-inaeiou(s[i-1])+inaeiou(s[i+k-1]);
            maxsum=max(maxsum,sum);
        }
        return maxsum;

    }
    bool inaeiou(char a){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')return true;
        else return false;
    }
};
// @lc code=end

