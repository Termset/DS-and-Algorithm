//
// Created by xutianqi on 2020/9/1.
//

#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
    int total_weight = 10;
    int w[5] = {5,4,3,2,1};
    int v[5] = {1,2,3,4,5};
    int dp[11] = {0};
    for (int i = 0; i <= sizeof(w); i++)
        for (int j = w[i]; j <= total_weight;j++)
            dp[j] = max(dp[j],dp[j - w[i]] + v[i]);
    cout << "总的价值为: " << dp[10] << endl;
    return 0;
}