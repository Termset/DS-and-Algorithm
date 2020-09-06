//
// Created by xutianqi on 2020/9/4.
//
# include <bits/stdc++.h>

using namespace std;

// 跳台阶问题 不能连续走两步

//int jumpFloor(int number) {
//    if (number == 0 || number == 1 || number == 2|| number==3 || number==4) {
//        return number;
//    }
//    int res;
//    res = jumpFloor(number-1)+jumpFloor(number-2)-jumpFloor(number-4);
//    return res;
//}
//
//int main(){
//    int m,n;
//    cin>>m;
//    n = jumpFloor(m);
//    cout<<n;
//}
//long long f[105][3];
//
//int main(){
//    int i,j,k,m,n;
//    cin>>n;
//    memset(f,0,sizeof(f));
//    f[1][1]=1;
//    f[2][1]=1;
//    f[2][2]=1;
//    for (i=3;i<=n;i++){
//        f[i][1]=f[i-1][1]+f[i-1][2];
//        f[i][2]=f[i-2][1];
//    }
//    cout<<f[n][1]+f[n][2];
//    return 0;
//}

// 题2 L[i] R[i] 判断数组最近最小或最近最大的序号，相乘积最大
//const int N = 100000 + 10;
//int a[N];
//int L[N];
//int R[N];
//int Max[N];
//int flag = 0;
//
//int main()
//{
//    int i,j,k,n;
//    int result = 0;
//    cin >> n;
//
//    for (i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    //计算L和R
//    for (i = 1; i <= n; i++)
//    {
//        //求L[i]
//        flag = 0;
//        for (j = 1; j < i; j++)
//        {
//            //判断条件
//            if (a[j] > a[i])
//            {
//                //判断距离,距离应该是越往后越近的
//                L[i] = j;
//                flag = 1;
//            }
//        }
//        if (flag == 0)
//        {
//            L[i] = 0;
//        }
//        //求R[i]
//        flag = 0;
//        for (k = i; k <= n; k++)
//        {
//            //判断条件
//            if (a[k] > a[i])
//            {
//                //判断距离,距离应该是越往后越近的
//                R[i] = k;
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//        {
//            R[i] = 0;
//        }
//    }
//
//    for (i = 1; i <= n; i++)
//    {
//        Max[i] = L[i] * R[i];
//        //cout << Max[i];
//        if (result < Max[i])
//        {
//            result = Max[i];
//        }
//    }
//    //cout << endl;
//    cout << result << endl;
//}

// 最大子串和
// 暴力解
int main()
{
    int n;
    cin>>n;
    int a[n+2];
    int b[n+2];
    b[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    int ans=-INFINITY;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
            ans=max(ans,b[j]-b[i-1]);
    }
    cout<<ans<<endl;
    return 0;
}