//
// Created by xutianqi on 2020/9/23.
//

#include <bits/stdc++.h>
using namespace std;

/*
 *从输入数据中取出4个作为平行四边形的边，求四边形最大面积
 * 已ac
 */
int main1(){
    int n;
    long long length, width;
    bool l= false,w= false;
    scanf("%d", &n);
    int a[n];
    map<long long,long long> mp;
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for (int i:a) mp[i]++;
    for (auto j=mp.rbegin();j!=mp.rend();j++){
        if (j->second>=2 && !l) {
            length=j->first;
            mp[j->first] -= 2;
            l=true;
        }
        if (j->second>=2&& !w){
            width = j->first;
            mp[j->first] -= 2;
            w=true;
        }
        if (l&&w) break;
    }
    if (l&&w)
        printf("%lld\n", length*width);
    else printf("%d", -1);
    return 0;
}
/*
 * 背包问题，
 */
double w[305];
int v[305];
double f[75005];

int main() {
    int i,j,k,m,n;
    int mm, ans=0;

    scanf("%d %d", &n, &m);
    mm = 0;
    for (i=0;i<n;i++)
    {
        scanf("%lf %d", &w[i], &v[i]);
        mm += v[i];
    }
    for (i=0;i<=mm;i++)
        f[i] = -1;
    f[0] = 0.0;
    f[v[0]] = w[0];
    for (i=1;i<n;i++)
    {
        for (j=mm-v[i];j>=0;j--)
            if (f[j] > -0.000001 && (f[j+v[i]] > f[j] + w[i] || f[j+v[i]] < -0.1))
            {
                f[j+v[i]] = f[j] + w[i];
                if (f[j+v[i]] <= double(m) && j+v[i] > ans)
                    ans = j + v[i];
            }
    }
    printf("%d", ans);
    while (1);
    return 0;
}

/*
 * 重复数据往前翻倍  例：2 2 1 -> 4 1, 4 2 2 1 -> 4 4 1 -> 8 1  代码有错误，通过18%
 */
int main3(){
    int n;
    scanf("%d", &n);
    map<int, int> mp;
    map<int, int> cnt;
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for (int i:a) mp[i]++;
    for (auto j=mp.rbegin();j!=mp.rend();j++)
    {
        if (j->second>1){
            if (j->second%2){
                cnt[(j->first)*(j->second-1)]++;
                mp[j->first]=1;
            }
            else {
                cnt[(j->first)*(j->second)]++;
                mp[j->first]=0;
            }
            mp[cnt.rbegin()->first]++;
            cnt.clear();
        }
    }
    for (auto j=mp.rbegin();j!=mp.rend();j++)
    {
        if (j->second==1)
            printf("%d ", j->first);
    }
}