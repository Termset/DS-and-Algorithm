//
// Created by xutianqi on 2020/12/31.
//
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;
        sort(intervals.begin(), intervals.end(), [](const auto &u, const auto &v){
            return u[1]<v[1];
        });
        int n=intervals.size();
        int right=intervals[0][1],ret=1;
        for (int i=1;i<n;i++) {
            if (intervals[i][0]>=right) {
                ret++;
                right=intervals[i][1];
            }
        }
        return n-ret;
    }
};

int main() {
    vector<vector<int>> intervals={{0,5},{2,3},{4,5},{1,2}};
    //[1,2],[2,3],[4,5],[0,5]
    Solution s;
    int ans=s.eraseOverlapIntervals(intervals);
    cout<<ans<<endl;
    return 0;
}