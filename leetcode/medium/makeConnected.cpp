//
// Created by xutianqi on 2021/1/23.
//

#include <vector>
#include <iostream>
#include <numeric>

using namespace std;


class UnionFind {
public:
    vector<int> parent;
    vector<int> size;
    int n;
    int setCount;

public:
    UnionFind(int _n):n(_n), setCount(_n), parent(_n), size(_n,1) { //初始化变量
        iota(parent.begin(), parent.end(), 0); // 对数组赋值
    }

    int findset(int x) {
        return parent[x]==x?x:parent[x]=findset(parent[x]);
    }

    bool unite(int x, int y) {
        x=findset(x);
        y=findset(y);
        if (x==y) return false;
        if (size[x]<size[y]) swap(x,y);
        parent[y]=x;
        size[x]+=size[y];
        --setCount;
        return true;
    }
    bool connected(int x, int y) {
        x=findset(x);
        y=findset(y);
        return x==y;
    }


};
class Solution{
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int computers=connections.size();
        if (computers<n-1) return -1;
        UnionFind uf(n);
        for (const auto& conn: connections) {
            uf.unite(conn[0], conn[1]);
        }

        return uf.setCount-1;

    }

};

int main() {

    int n=4;
    vector<vector<int>> connactions={{0,1},{1,2},{0,2}};

    Solution s;
    int ans=s.makeConnected(n,connactions);
    cout<<ans<<endl;
    return 0;
}