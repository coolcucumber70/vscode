/*
 * @lc app=leetcode.cn id=1805 lang=cpp
 *
 * [1805] 字符串中不同整数的数目
 */

// @lc code=start
#include<iostream>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string>set;
        int start=0;
        word+='a';
        for(int end=0;end<word.size();end++){
            if((word[end]<'0'||word[end]>'9')){
                if(start==end){
                    start++;
                }
                else{
                    string num=word.substr(start,end-start);
                    for(int i=0;i<num.size();i++){
                        if(num[i]!='0'){
                            num=num.substr(i,num.size()-i);
                            break;
                        }
                        if(i==num.size()-1){
                            num='0';
                        }
                    }
                    if(set.find(num)==set.end()){
                        set.insert(num);
                    }
                    start=end;
                    start++;
                }
            }
        }
        return set.size();  
        }
};
// @lc code=end

