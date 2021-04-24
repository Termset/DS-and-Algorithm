//
// Created by xutianqi on 2020/9/18.
//
# include <iostream>
# include <bits/stdc++.h>

using namespace std;
int a[30];
int v[30];
int f[30];

int main(){
    int i,j,k,m,n,d;
    scanf("%d%d",&n,&d);
    a[0]=0;
    for (i=1;i<=n;i++) scanf("%d", &a[i]);
    for (i=1;i<=n;i++) scanf("%d", &v[i]);

    memset(f,0,sizeof(f));
    m=0;
    for (i=1;i<=n;i++)
    {
        for (j=0;j<i;j++)
            if ((i-j)*d>=abs(a[i]-a[j]) && f[j]+v[i]>f[i])
                f[i]=f[i]+v[i];
        if (f[i]>m)
            m=f[i];
    }
    printf("%d", m);
    return 0;
}