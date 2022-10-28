/*
 * @lc app=leetcode.cn id=827 lang=cpp
 *
 * [827] 最大人工岛
 */

// @lc code=start
using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>
class Solution {
public:
    vector<vector<int>>visit;
    int max;
    bool valid(int x,int y){
        if(x<0||x>max||y<0||y>max){
            return false;
        }
        else{
            return true;
        }
    }
    int dfs( vector<vector<int>> &grid, int x, int y, int flag) {
        visit[x][y] = flag;
        if (valid(x+1,y) && grid[x+1][y] == 1 && visit[x+1][y] == 0) {
                return dfs(grid, x+1, y,flag)+1;
            }
        if(valid(x,y+1) && grid[x][y+1] == 1 && visit[x][y+1] == 0){
            return dfs(grid, x, y+1,flag)+1;
        }
       if(valid(x-1,y) && grid[x-1][y+1] == 1 && visit[x-1][y] == 0){
            return dfs(grid, x-1, y,flag)+1;
        }
       if(valid(x,y-1) && grid[x][y-1] == 1 && visit[x][y-1] == 0){
            return dfs(grid, x, y-1,flag)+1;
        }
       return 0;
    }

    int largestIsland(vector<vector<int>>& grid) {
        int res=0;
        max=grid.size();
        vector<int>tmp(max,0);
        visit.resize(max);
        for(int i=0;i<max;i++){
            visit[i]=tmp;
        }
        for(int i=0;i<max;i++){
            for(int j=0;j<max;j++){
                if(grid[i][j]==1&&visit[i][j]==0){
                    res=max(res,dfs(grid,i,j,1));
                }
                // if(grid[i][j]==0&&grid[i-1][j]==1&&grid[i+1][j]==1){
                //     res=max(res,dfs(grid,i-1,j,1)+dfs(grid,i+1,j,1));
                // }
                // if(grid[i][j]==0&&grid[i][j+1]==1&&grid[i+1][j-1]==1){
                //     res=max(res,dfs(grid,i-1,j,1)+dfs(grid,i+1,j,1));
                // }
            }
        }
        return res;

    }
    
};
// @lc code=end

