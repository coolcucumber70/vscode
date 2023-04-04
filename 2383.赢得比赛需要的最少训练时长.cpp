/*
 * @lc app=leetcode.cn id=2383 lang=cpp
 *
 * [2383] 赢得比赛需要的最少训练时长
 */

// @lc code=start
#include <numeric>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int en_add=0,ex_add=0,en_sum=0,ex_sum=0;
        en_sum = std::accumulate(energy.begin(), energy.end(), 0);
        en_add=en_sum-initialEnergy+1;
        if(en_add<=0){
            en_add=0;
        }
        ex_sum=initialExperience;
        for(int i=0;i<experience.size();i++){
            if(ex_sum>experience[i]){
                ex_sum+=experience[i];
            }
            else{
                ex_add+=(experience[i]- ex_sum+1);
                ex_sum=2*experience[i]+1;
            }
        }
        return ex_add+en_add;


        
    }
};
// @lc code=end

