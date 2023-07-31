/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
//无非是两个指针，一个读，一个写
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0)continue;
            nums[index++]=nums[i];
        }
        for(int i=index;i<n;i++){
            nums[i]=0;
        }
        
    }
};
// @lc code=end

