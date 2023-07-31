using namespace std;
#include<iostream>
#include<vector>
#include <numeric>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=std::accumulate(nums.begin(), nums.begin()+k, 0);
        int maxsum=sum;
        for(int i=1;i<nums.size()-k+1;i++){
            sum=sum-nums[i-1]+nums[i+k-1];
            maxsum =max(maxsum,sum) ;
        }
        return double(maxsum)/k;
    }
};
int main(){
   vector<int>nums={0,4,0,3,2};
   Solution S;
   cout<<"ok";
   cout<<S.findMaxAverage(nums,1)<<endl;;
}
