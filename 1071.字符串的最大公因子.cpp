/*
 * @lc app=leetcode.cn id=1071 lang=cpp
 *
 * [1071] 字符串的最大公因子
 */

// @lc code=start
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=min(str1.size(),str2.size());
        for(int i=n;i>=0;i--){
            if((str1.size()%i==0) && (str2.size()%i==0)){
                if(str1.substr(0,i)==str2.substr(0,i)){
                    string t=str1.substr(0,i);
                    if(check(str1,t)&&check(str2,t)){
                        return t;
                    }

                }
            }
        }
        return "";


    };
    bool check(string str,string t){
        int n=str.size()/t.size();
        string res="";
        for (int i=0;i<n;i++){
            res+=t;
        }
        return str==res;
    }

};
// @lc code=end

