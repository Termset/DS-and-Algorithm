//
// Created by xutianqi on 2020/9/28.
//

#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    /**
     *
     * @param data int整型一维数组
     * @param dataLen int data数组长度
     * @return int整型
     */
    int getResult(int* data, int dataLen) {
        // write code here
        int dp[10005];
        memset(dp,0,sizeof(dp));
        int m=0;
        for (int i=0;i<dataLen;i++)
        {
            dp[i]=1;
            for (int j=i-1;j>=0;j--)
                if (data[j]<data[i] && dp[j]+1>dp[i]) dp[i]=dp[j]+1;
            if (dp[i]>m) m=dp[i];
        }
        for (int i=dataLen-1;i>=0;i--){
            dp[i]=1;
            for (int j=i+1;j<dataLen;j++){
                if (data[j]<data[i]&&dp[j]+1>dp[i]) dp[i]=dp[j]+1;
            }
            if (dp[i]>m) m=dp[i];
        }
        return dataLen-m;
    }
};