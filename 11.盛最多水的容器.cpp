/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
int max(int a,int b)
{
    return (a>b?a:b);
}
int min(int a,int b)
{
     return (a<b?a:b);

}
int calmaxv(int a[],int n)
{
    int i=0,j=n-1;
    int result=0;
    while(i<j)
    {
        if(a[i]<a[j])
        {
            i++;
            if(a[i]<a[i-1])
            {
                i++;
            }
        }
        else
        {
            j--;
            if(a[j]<a[j+1])
            {
                j--;
            }
        }
        int h=min(a[i],a[j]);
        int v=(j-i)*h;
        result=max(result,v);
    }
    return result;
}
// @lc code=end

