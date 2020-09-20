//
// Created by xutianqi on 2020/9/19.
//
# include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int fac(int x)
    {
        register int i,f=1;  //定义寄存器变量

        for(i=1;i<=x;i++)
            f*=i;

        return f;
    }
    int paintingPlan(int n, int k) {
        if (k>n*n || k<=0)
            return 0;
        int count=0;
        for (int i=0;i<=n;i++)
        {
            for (int j=0;j<=n;j++)
            {
                if (j*n+i*n-i*j == k) {
                    cout << i << ' ' << j << endl;
                    // Ci n + C j n
                    count+=(fac(n)/(fac(n-i)*fac(i)))*(fac(n/(fac(n-j)*fac(j))));
                }
            }
        }
        return count;
    }
};
int main(){
    Solution s;
    cout<<s.paintingPlan(3,5);
}


//int a[100]; //存储排列的数
//int fun(int m,int k)
//{
//    int i,j,c=0;
//    for(i=m;i>=k;i--)
//    {
//        a[k]=i;
//        if(k>1)
//            fun(i-1,k-1);
//        else
//        {
//            for(j=a[0];j>0;j--)
//                c++;
//        }
//    }
//    return c;
//}
//
//
//int main() {
//    int n, r;
//    cout << "请输入n和r的值:" << endl;
//    cin >> n >> r;
//    if (r > n)
//        cout << "输入n和r的值错误!" << endl;
//    else {
//        a[0] = r;
//        cout<<fun(n, r);
//    }
//    return 0;
//}