/*
 * @lc app=leetcode.cn id=670 lang=cpp
 *
 * [670] 最大交换
 */

// @lc code=start
using namespace std;
#include<iostream>
#include<string>
class Solution {
public:
    int maximumSwap(int num) {
        string numarry= to_string(num);
        int n=numarry.size();
        for(int i=0;i<n;i++){
            int k=i;
            for(int j=i+1;j<n;j++){
                if ((numarry[j]>numarry[k])){
                    
                    k=j;
                }
            }
            if((k!=i)&&(numarry[k]!=numarry[i])){
                swap(numarry[i],numarry[k]);
                return stoi(numarry);
                
            }
        }
        return num;
        
    }
};
// @lc code=end
