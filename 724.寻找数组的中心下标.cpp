/*
 * @lc app=leetcode.cn id=724 lang=cpp
 *
 * [724] 寻找数组的中心下标
 */

// @lc code=start
#include<vector>
class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        std::vector<int>res(1,0);
        int tmp=0;
        int n=nums.size();
        for(auto x :nums){
            tmp+=x;
            res.push_back(tmp);    
        }
        for(int i=0;i<n;i++){
            if(res[i]==res[n]-res[i+1])return i;
        }
        return -1;
        

    }
};
// @lc code=end

