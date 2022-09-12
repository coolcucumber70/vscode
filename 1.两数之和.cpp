/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include<iostream>
#include<unordered_map>
using namespace std;
#include<vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hashtable;
        for(int i=0;i<nums.size();i++){
            if(hashtable.count(target-nums[i])){
                return{i,hashtable[target-nums[i]]};
            }
            hashtable[nums[i]]=i;
        }
         return {};

    }
};
// @lc code=end

