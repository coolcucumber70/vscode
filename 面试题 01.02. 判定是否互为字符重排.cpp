#include<iostream>
using namespace std;
#include<string.h>
#include<unordered_map>
class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        if(s1.size()!=s2.size()){
            return false;
        }
        unordered_map<char,int>hash;
        for(auto c :s1){
            hash[c]++;
        }
        for(auto c:s2){
            if((hash.find(c)!=hash.end())&&hash[c]!=0){
                hash[c]--;
            }
            else{
                return false;
            } 
        }
        return true;
    }
};