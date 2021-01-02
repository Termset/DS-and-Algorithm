//
// Created by xutianqi on 2021/1/2.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int len=nums.size();
        if (len<2 || k==1) return nums;
        deque<int> q;
        vector<int> ans;
        for (int j=0;j<k-1;j++) {
            while (!q.empty() && nums[j]>nums[q.back()]) {
                q.pop_back();
            }
            q.push_back(j);
        }
        for (int i=k-1;i<len;i++) {
            while (!q.empty() && nums[i]>nums[q.back()]) {
                q.pop_back();
            }
            if (q.front()>i-k) q.pop_front();
            q.push_back(i);
            ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};

int main() {
    vector<int> nums={1,3,1,2,0,5};
    int k=3;
    Solution s;
    vector<int> ans;
    ans=s.maxSlidingWindow(nums,k);
    return 0;
}