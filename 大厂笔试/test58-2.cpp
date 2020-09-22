//
// Created by xutianqi on 2020/9/21.
//

#include <bits/stdc++.h>

using namespace std;

/*
 * 非负整数num，每个0<=i<=num，i的二进制中1的数目
 */
class Solution{
public:
    int Countbit(int x)
    {
        int res=0;
        while (x)
        {
            res++;
            x&=x-1;
        }
        return res;
    }

    vector<int> Countbits(int num){
        vector<int> ans;
        for (int i=0;i<=num;i++)
            ans.push_back(Countbit(i));
        return ans;
    }
};
/*
 * 输入字符串，输出字符串数学表达式的值
 */
int ConvertToRes(string s)
{
    int result=0;
    const char *index = s.c_str();
//    char* index=str;
    int a=0;
    int b=1;
    char flag='+';
    bool isMul=false;
    while (*index!='\0')
    {
        if(*index=='+' || *index=='-' || *index=='*')
        {
            if(*index=='*')
            {
                b*=a;
                isMul=true;
                a=0;
            }
            else
            {
                if(flag=='+')
                {
                    if(isMul)
                    {
                        result+=(b*a);
                        b=1;
                        a=0;
                    }
                    else
                    {
                        result+=a;
                        a=0;
                    }
                }
                if(flag=='-')
                {
                    if(isMul)
                    {
                        result-=(b*a);
                        b=1;
                        a=0;
                    }
                    else
                    {
                        result-=a;
                        a=0;
                    }
                }
                flag=*index;
            }
        }
        else
            a=10*a+(*index-'0');
        ++index;
    }

    if(flag=='+')
    {
        if(isMul)
            result+=(b*a);
        else
            result+=a;
    }

    if(flag=='-')
    {
        if(isMul)
            result-=(b*a);
        else
            result-=a;
    }

    return result;
}
int main()
{
    cout<<ConvertToRes("3+1*2*3*4+9-10");
}