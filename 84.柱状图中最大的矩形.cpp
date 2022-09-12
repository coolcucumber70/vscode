/*
 * @lc app=leetcode.cn id=84 lang=cpp
 *
 * [84] 柱状图中最大的矩形
 */

// @lc code=start
#include<vector>
#include<stack>
#include<iostream>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int len=heights.size();
        stack<int>s;
        s.push(0);
        int result=heights[0];
        int max,tmp,index,last;
        for(int i=1;i<len;i++)
        {

            while((heights[i]<heights[s.top()]))
            {
                index=s.top();
                tmp=heights[index];
                s.pop();
                max=(i-s.top()-1)*tmp;
                result=(result>max?result:max);
                if(s.empty()){
                    break;
                }
            }
            s.push(i);
        }
        if(!s.empty()){
            last=s.top();
        }
        while(s.size()>1)
        {
            
            index=s.top();
            tmp=heights[index];
            s.pop();
            max=(last-s.top())*tmp;
            result=(result>max?result:max);
        }
        if(s.size()==1)
        {
            index=s.top();
            max=heights[index]*len;
            result=(result>max?result:max);

        }
        return result;

        



    }
};
// @lc code=end

