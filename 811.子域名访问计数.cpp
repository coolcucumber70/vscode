using namespace std;
#include<iostream>
#include<vector>
#include<unordered_map>
class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int>hash;
        vector<string>res;
        for(auto x:cpdomains){
            res.emplace_back(x);
            int space=x.find(' ');
            int num=stoi(x.substr(0,space));
            int pos=x.find('.');
            while(pos!=string::npos){
                x=x.substr(pos);
                hash[x]+=num;
                pos=x.find('.');
            }
        }
        for(auto pair:hash){
            res.emplace_back(to_string(pair.second)+" "+pair.first);
        }
        return res;
    }
};