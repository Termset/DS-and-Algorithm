//
// Created by xutianqi on 2020/12/30.
//
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int first, second, tmp;
        priority_queue<int> q;
        for (auto stone:stones) {
            q.push(stone);
        }
        while (q.size()>=2) {
            first=q.top();
            q.pop();
            second=q.top();
            q.pop();
            tmp=first-second;
            q.push(tmp);
        }
        return q.top();
    }
};