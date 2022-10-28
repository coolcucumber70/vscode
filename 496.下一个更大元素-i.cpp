/*
 * @lc app=leetcode.cn id=496 lang=cpp
 *
 * [496] 下一个更大元素 I
 */

// @lc code=start
using namespace std;
#include<iostream>
#include<unordered_map>
#include<stack>
#include<vector>
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hashmap;
        vector<int>res;
        stack<int> st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty()&&nums2[i]>=st.top()){
                st.pop();
            }
            if(st.empty())hashmap[nums2[i]]=-1;
            else hashmap[nums2[i]]=st.top();
            st.push(nums2[i]);
        }
        for(auto x:nums1){
            res.push_back(hashmap[x]);
        }
        return res;


    }
};
// @lc code=end

