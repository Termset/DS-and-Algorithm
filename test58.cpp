//
// Created by xutianqi on 2020/9/14.
//

# include <bits/stdc++.h>

using namespace std;

// 查找最小正整数
int missMinNum(int arr[], int n)
{
    int l = 0;
    int r = n;
    while(l < r)
    {
        if(arr[l] == l + 1)//在理想的位置
        {
            l++;
        }
        else if(arr[l] > r || arr[l] <= l || arr[arr[l] - 1] == arr[l])//不合法的数据
        {
            arr[l] = arr[--r];
        }
        else//合法但是没有在理想的位置上
        {
            swap(arr[l], arr[arr[l] - 1]);
        }
    }//while
    return l + 1;
}//missMinMun()

int main(){
    int a[5]={-1,0,1,2,4};
    int ans;
    ans = missMinNum(a,5);
    cout<<ans;
}