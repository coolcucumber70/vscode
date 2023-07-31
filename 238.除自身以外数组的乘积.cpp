/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>answer(n,0);
        vector<int>l(n,0);
        vector<int>r(n,0);
        for(int i=0;i<n;i++){
            if(i==0){
                l[i]=nums[i];
                r[n-1-i]=nums[n-1-i];
            }
            else{
                l[i]=nums[i]*l[i-1];
                r[n-1-i]=r[n-i]*nums[n-i-1];
            }
        }
        for(int i=0;i<n;i++){
            if(i==0){
                answer[i]=r[i+1];

            }
            else if (i==n-1){
                answer[i]=l[i-1];
            }
            else{
                answer[i]=l[i-1]*r[i+1];
            }
            
        }
        return answer;

    }
};
// @lc code=end

