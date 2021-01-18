//
// Created by xutianqi on 2021/1/18.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int Find(vector<int> &parents, int index) {
        if (parents[index]!=index) {
            parents[index]=Find(parents, parents[index]);
        }
        return parents[index];
    }
    void Union(vector<int>& parents, int index1, int index2) {
        parents[Find(parents, index1)]=Find(parents, index2);
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int provinces=isConnected.size();
        vector<int> parents(provinces);
        for (int i=0;i<provinces;i++) {
            parents[i]=i;
        }
        for (int i=0;i<provinces;i++) {
            for (int j=i+1;j<provinces;j++) {
                if (isConnected[i][j]==1) {
                    Union(parents, i, j);
                }
            }
        }
        int circle=0;
        for (int i=0;i<provinces;i++) {
            if (parents[i]==i) {
                circle++;
            }
        }
        return circle;
    }
};

int main () {
    vector<vector<int>> isConnected={{1,1,0},{1,1,0},{0,0,1}};
    Solution s;
    int ans=s.findCircleNum(isConnected);
    cout<<ans<<endl;
    return 0;
}