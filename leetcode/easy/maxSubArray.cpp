//
// Created by xutianqi on 2020/12/30.
//
#include <vector>
#include <iostream>
using namespace std;


class Solution {public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size());
        dp[0]=nums[0];
        int max_sum=dp[0];
        for (int i=1;i<nums.size();i++) {
            dp[i]=max(dp[i-1]+nums[i],nums[i]);
            max_sum=max(dp[i],max_sum);
        }
        return max_sum;
    }
};

int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    Solution s;
    int res=s.maxSubArray(nums);
    cout<<res<<endl;
    return 0;
}
/*
 * -2 1 -2 4 3 5 6 1 5
 */