/*
 * @lc app=leetcode.cn id=1619 lang=cpp
 *
 * [1619] 删除某些元素后的数组均值
 */

// @lc code=start
using namespace std;
#include <vector>
#include <iostream>
class Solution
{
public:
    double trimMean(vector<int> &arr)
    {
        //利用选择法来进行排序吧
        int n = arr.size();
        int tmp = n * 0.05;
        for (int i = 0; i < tmp; i++)
        {
            int k1 = i,k2=i;
            for (int j = i; j < n - i ; j++)
            {

                if (arr[j] > arr[k1])
                {
                    k1=j;
                }
                if(arr[j]<arr[k2]){
                    k2=j;
                }
            }
            swap(arr[k1],arr[n-1-i]);
            swap(arr[k2],arr[i]);

        }
        double sum = 0;
        for (int i = tmp; i < n - tmp; i++)
        {
            sum += arr[i];
        }
        return sum / (n - tmp - tmp);
    }
};
// @lc code=end
