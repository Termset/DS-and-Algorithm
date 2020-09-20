//
// Created by xutianqi on 2020/9/19.
//

#include <bits/stdc++.h>

using namespace std;

/*
 * 沙滩按照线型摆放着n个大小不一的球形石头，已知第i个石头的半径为ri，且不存在两个石头有相同的半径。
 * 为了使石头的摆放更加美观，现要求摆放的石头的半径从左往右依次递增。因此，需要对一些石头进行移动，
 * 每次操作可以选择一个石头，并把它放在剩下n−1个石头在最左边或最右边。问最少需要操作多少次才能将这n个石头的半径变成升序？
 *
 * 5
 * 4 1 2 5 3
 * output
 * 2
 */
//
//int main(){
//    int i,j,k,m=1,n,max=1;
//    cin>>n;
//    int *a = new int[n];
//    int *dp = new int[n];
//    for (i=0;i<n;i++){
//        cin>>a[i];
//    }
//    for (i=0;i<n;i++)
//    {
//        dp[i]=a[i];
//        for (j=i+1;j<n;j++)
//        {
//            dp[j]=a[j];
//            if (dp[i] + 1 == dp[j]) {
//                m = m + 1;
//                dp[i] = dp[j];
//            }
//        }
//        if (m>max)
//            max=m;
//        m=1;
//    }
//
//    cout<<n-max;
//
//}

/*
 * 给你一个长度为n的01串。现在想让你找出最长的01交替子串（子串可以不连续）
 * 比如：1010,0101是01交替的串，1101则不是。现在你可以把某一个连续的区间进行翻转，
 * 即0变1，1变0。问修改之后的最大01交替子串的长度是多少。
 *
 */

int main(){
    int i,j,k=1,m,n;
    string s;
    cin>>n;
    cin>>s;
    for (i=0;i<=n;i++)
        if (s[i]!=s[i+1])
            k++;
    printf("%d\n",k<n-1?k+2:n);
}