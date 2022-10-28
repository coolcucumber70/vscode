/*
 * @lc app=leetcode.cn id=927 lang=cpp
 *
 * [927] 三等分
 */

// @lc code=start
using namespace std;
#include<vector>
#include<iostream>

class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        string str="";
        int all_one=0,last_zero=0, count=0,pos=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                str+='1';
                all_one++;

            }
            else str+='0';
        }
        for(int i=0;i<str.size();i++){
            cout<<str[i];
        }
        cout<<endl;
        if(all_one%3!=0){
            return{-1,-1};
        }
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]==1)count++;
            if(count==all_one/3){
                pos=i;
            }
        }
        int len=arr.size()-pos;
        string strchild=str.substr(pos,len);
        pos=str.find(strchild,0);
        if(pos==string::npos){
            return {-1,-1};
        }
        int l=pos+len-1;
        pos=str.find(strchild,l+1);
        if(pos==string::npos){
            return {-1,-1};
        }
        int r=pos+len;
        pos=str.find(strchild,r);
        if(pos==string::npos){
            return {-1,-1};
        }
        else{
            return {l,r};
        }
    }
};
int main(){
    Solution S;
    vector<int>v={1,0,1,0,1};
    vector<int>res=S.threeEqualParts(v);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
// @lc code=end

