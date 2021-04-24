//
// Created by xutianqi on 2020/9/16.
//

#include <stdio.h>
#include <iostream>

using namespace std;

long long a[10];
long long ok(long long x){
    long long y=0;
    for (int i=0;i<4;i++)
    {
        if (a[i]<x) y-=(x-a[i]) * 2;
        else y+=(a[i]-x);
    }
    return y;
}
int main(){
    long long s,t,k;
    cin>>a[0];
    s=a[0];
    t=a[0];
    for (int i=1;i<4;i++)
    {
        cin>>a[i];
        if (a[i]>t) t=a[i];
        if (a[i]<s) s=a[i];
    }
    while (s<t-1)
    {
        k=(s+t)/2;
        if (ok(k)>=0)
            s=k;
        else
            t=k;
    }
    if (ok(t)==0)
        cout<<t*4;
    else if (ok(s)==0)
        cout<<s*4;
    else
        cout<<"-1";

    return 0;
}