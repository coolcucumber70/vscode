/*
 * @lc app=leetcode.cn id=1004 lang=cpp
 *
 * [1004] 最大连续1的个数 III
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        nums[0] = !nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] = !nums[i] + nums[i - 1];
        }
        int maxsum=0;
        if(k>=nums.size())return nums.size();
        if(k!=0){
            int n=nums.size();
            maxsum=int(std::distance(nums.begin(),find_end(nums.begin(),nums.end(),&k,&k+1))+1);
            maxsum=min(n,maxsum);
        }
        int l = 1, r = k+1;
        auto it1 = nums.begin(), it2 = nums.begin();
        do
        {
            it1 = std::find(it1, nums.end(), l);
            it2 = std::find_end(it2, nums.end(), &r, &r + 1);
            if (it2 != nums.end())
            {
                int sum = std::distance(it1, it2);
                maxsum = max(sum, maxsum);
            }
            l++;
            r++;
        } while (it2 != nums.end());
        return maxsum;
    }
};

##真正双指针：
class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int res = 0, zeros = 0, left = 0;
        for (int right = 0; right < A.size(); ++right) {
            if (A[right] == 0) ++zeros;
            while (zeros > K) {
                if (A[left++] == 0) --zeros;
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};

作者：负雪明烛
链接：https://leetcode.cn/problems/max-consecutive-ones-iii/solutions/609055/fen-xiang-hua-dong-chuang-kou-mo-ban-mia-f76z/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
// @lc code=end
