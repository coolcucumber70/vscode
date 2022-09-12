/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>v;
        flashback(nums,v,0);
        return res;
    }
    void flashback(vector<int>& nums,vector<int>&v,int level){
        if(level==nums.size()){
            res.push_back(v);
            return;
        }
        for(auto data:nums){

            if(std::find(v.begin(), v.end(),data) != v.end()){
                v.push_back(data);
                flashback(nums,v,level+1);
                v.pop_back();
            }
            

        }
    }
    vector<vector<int>>res;
};
// @lc code=end

