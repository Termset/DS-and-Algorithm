//
// Created by xutianqi on 2020/9/17.
//

# include <bits/stdc++.h>

using namespace std;

/*
 * 找出丢失的一行
 * input
3
3 8 12
9 13 20
3 6 9
8 10 13
12 17 20
 output
 6 10 17
 */

//int main(){
//    int i,j,k,m=0,n;
//    int N;
//    cin>>N;
//    int a[2*N-1][N];
//    for (i=0;i<2*N-1;i++)
//    {
//        for (j=0;j<N;j++)
//            cin>>a[i][j];
////        for (i=0;j<N;j++)
//        if (i>0 && a[i][0]<a[i-1][0])
//            m=i;
//    }
//    if (m<N)
//    {
//        for (i=0;i<N;i++)
//            if (a[N-1][i]!=a[i][0])
//                break;
//        m=i;
//    }
//    else {
//        for (i = N; i < N * 2 - 1; i++)
//            if (a[0][i - N] != a[i][0])
//                break;
//        m = i;
//    }
//    if (m<N)
//        for (k=0;k<N;k++)
//            cout<<a[N+k-1][m]<<' ';
//    else
//        for (k=0;k<N;k++)
//            cout<<a[k][m-N]<<' ';
//
//}

/*轮询公约数
3 1
8 9 20
1 5
 output

 5
 */
int f[10005];
int a[10005];
bool bo[10005];

int main(){
    int i,j,k,m,n;
    int max;
    cin>>n>>m;

    memset(bo,0,sizeof(bo));
//    memset(f,0,sizeof(f));
    max=0;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
//        if (a[i]>max) max=a[i];
    }
    bo[1] = true;
//    f[1]=1;
    for (i=2;i<=100;i++)
    {
//        f[i]=f[i-1];
        for (j=0;j<n;j++)
            if (a[j] % i == 0)
            {
                bo[i]=true;
                bo[a[j]/i]=true;
//                f[i]++;
//                break;
            }
    }
    f[0]=0;
    for (i=1;i<=10000;i++)
        if (bo[i]) f[i] = f[i-1]+1;
        else f[i]=f[i-1];
    for (i=0;i<m;i++)
    {
        cin>>j>>k;
//        if (k>max) k=max;
//        if (j>max) j=max;
//        cout<<f[k]-f[j-1]<<'\n';
        printf("%d\n", f[k]-f[j-1]);
    }
    return 0;
}