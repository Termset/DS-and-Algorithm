//
// Created by xutianqi on 2020/9/1.
//

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int total_weight = 10;
    int w[6] = { 0,5,4,3,2,1 };
    int v[6] = { 0,1,2,3,4,5 };
    int cot[6] = { 0,1,2,1,2,1 };
    int dp[11] = { 0 };
    for (int i = 1; i <= 5; i++)
        for (int k = 1; k <= cot[i];k++)
            for (int j = total_weight; j >= w[i]; j--)
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    cout << "�ܵļ�ֵΪ: " << dp[10] << endl;
    return 0;
}