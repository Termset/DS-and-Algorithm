//
// Created by xutianqi on 2020/10/5.
//
#include <bits/stdc++.h>
using namespace std;

//void dfs(int num，......)//参数用来表示状态
//{
//    if(判断边界)
//        {
//        ...//根据题意添加
//        return;
//        }
//    if(越界或者是不合法状态)
//    return;
//    for(扩展方式)  //也可能是if根据题意使用适合的方式
//    {
//        if(扩展方式所达到状态合法)
//        {
//            修改操作;//根据题意来添加
//            标记；
//            dfs（）；
//            (还原标记)；
//            //是否还原标记根据题意
//            //如果加上（还原标记）就是 回溯法
//        }
//    }
//}


int n;//1-n的全排列
const int maxn=10000;
int a[maxn];//当前的全排列
bool flag[maxn]={false};//记录是否已经在a数组里
void DFS(int index){
    if(index==n+1){
        for(int i=1;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<a[n]<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(!flag[i]){
            a[index]=i;
            flag[i]=true;
            DFS(index+1);
            flag[i]=false;
        }
    }
}
int main(){
    cin>>n;
    DFS(3);
    return 0;
}
