//
// Created by xutianqi on 2020/9/22.
//

#include <stdio.h>

int main()
{
    int a[4][2]={{2,4},{6,8},{1,3},{5,7}};
    int (*p)[2]; //数组指针 []优先级高于*，所以加（）
    int *b[10];  //指针数组 是指一个数组里面装着指针，也即指针数组是一个数组
    p=a;

    printf("p=%p, p+1=%p\n", p, p+1);
    printf("p[0]=%p, p[0]+1=%p\n", p[0], p[0]+1);
    printf("*p=%p, *p+1=%p\n", *p,*p+1);
    printf("p[0][0]=%d\n",p[0][0]);
    printf("*p[0]=%d\n",*p[0]);
    printf("**p=%d\n", **p);
    printf("p[2][1]=%d\n",p[2][1]);
    printf("*(*(p+2)+1)=%d\n", *(*(p+2)+1));

    return 0;
}