//
// Created by xutianqi on 2021/4/24.
//
#include <bits/stdc++.h>

using namespace std;

//class Solution {
//
//public:
//    int count=0;
//    void backtrace(vector<int>& nums, int target, int sum) {
//        //结束条件
//        // if () {
//
//        // }
//        for (int num:nums) {
//            sum+=num;
//            if (sum==target) {
//                count++;
//                return;
//            } else if (sum>target) {
//                return;
//            } else {
//                backtrace(nums, target, sum);
//            }
//        }
//
//    }
//    int combinationSum4(vector<int>& nums, int target) {
//        backtrace(nums, target, 0);
//        return count;
//    }
//};


class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1);
        dp[0] = 1;
        for (int i = 1; i <= target; i++) {
            for (int& num : nums) {
                if (num <= i && dp[i - num] < INT_MAX - dp[i]) {
                    dp[i] += dp[i - num];
                }
            }
        }
        return dp[target];
    }
};

int main(){

    vector<int> nums={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260,270,280,290,300,310,320,330,340,350,360,370,380,390,400,410,420,430,440,450,460,470,480,490,500,510,520,530,540,550,560,570,580,590,600,610,620,630,640,650,660,670,680,690,700,710,720,730,740,750,760,770,780,790,800,810,820,830,840,850,860,870,880,890,900,910,920,930,940,950,960,970,980,990,111};
    Solution s;
    int res = s.combinationSum4(nums,999);
    cout<<res<<endl;
}