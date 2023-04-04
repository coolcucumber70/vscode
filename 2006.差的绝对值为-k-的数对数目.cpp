/*
 * @lc app=leetcode.cn id=2006 lang=cpp
 *
 * [2006] 差的绝对值为 K 的数对数目
 */

// @lc code=start
#include<iostream>
#include<unordered_map>
using namespace std;
#include<vector>
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>hashtable;
        int res=0;
        for(int i=0;i<nums.size();i++){
            res+=hashtable.count(nums[i]+k)?hashtable[nums[i]+k]:0;
            res+=hashtable.count(nums[i]-k)?hashtable[nums[i]-k]:0;
            hashtable[nums[i]]++;
        }
        return res;
    }
};
// @lc code=end

