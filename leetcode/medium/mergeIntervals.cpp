//
// Created by xutianqi on 2020/12/30.
//

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merge;
        for (int i=0;i<intervals.size();i++) {
            int left=intervals[i][0], right=intervals[i][1];
            if (!merge.empty() && merge.back()[1]>=left) {
                merge.back()[1]=max(merge.back()[1],right);
            } else {
                merge.push_back(intervals[i]);
            }
        }
        return merge;
    }
};

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{7,8}};
    Solution s;
    vector<vector<int>> ans=s.merge(intervals);
}
