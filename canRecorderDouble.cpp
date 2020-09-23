//
// Created by xutianqi on 2020/9/23.
//

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool canReorderDoubled(vector<int>& A) {
        map<int, int> cnt;
        int match;

        for(int i: A) cnt[i]++;
        for(auto i = cnt.begin(); i != cnt.end(); ++i)
        {
            if(i->second > 0)
            {
                if(i->first > 0)
                {
                    match = i->first * 2;
                }
                else
                {
                    if(i->first % 2) return false;
                    match = i->first / 2;
                }
                cnt[match] -= i->second;
                if(cnt[match] < 0) return false;
            }
        }

        return true;

    }
};

int main(){
    vector<int> a;
    a = {2,4,3,-2,-4,6};
    Solution s;
    printf("%d", s.canReorderDoubled(a));
    return 0;

}
