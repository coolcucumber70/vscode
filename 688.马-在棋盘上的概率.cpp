/*
 * @lc app=leetcode.cn id=688 lang=cpp
 *
 * [688] “马”在棋盘上的概率
 */

// @lc code=start
class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        dg(0,k,row,column,n);
        return(t/pow(8,k));


    }
    double dg(int level,int k,int row,int colum,int n){
        if(row>n-1||colum>n-1||row<0||colum<0){
            return 0;
        }
        if(level==k)
        {
            return 1;
        }
        dg(level+1,k,row+2,colum+1,n);
        dg(level+1,k,row+2,colum-1,n);
        dg(level+1,k,row+1,colum+2,n);
        dg(level+1,k,row+1,colum-2,n);
        dg(level+1,k,row-2,colum+1,n);
        dg(level+1,k,row-2,colum-1,n);
        dg(level+1,k,row-1,colum+2,n);
        dg(level+1,k,row-1,colum-2,n);

    } 
    double mem[][][];
};
// @lc code=end

