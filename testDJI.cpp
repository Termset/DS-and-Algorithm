//
// Created by xutianqi on 2020/8/16.
//
// Ã‚1
//#include<stdio.h>
//
//int n,s;
//int map[205][205];
//bool visit[205];
//int min[205];
//
//
//int dij(int m)
//{
//    int i,j;
//    for (i=0;i<n+4;i++)
//        min[i] = 1000000036;
//    visit[i] = false;
//
//    visit[0]=true;
//    for(i=1;i<n;i++)
//        min[i]=map[0][i];
//    for(i=1;i<n;i++)
//    {
//        if(i==m)
//            i++;
//        for(j=0;j<n;j++)
//        {
//            if(min[i]+map[i][j]<min[j]&&!visit[j])
//                min[j]=min[i]+map[i][j];
//
//        }
//        visit[i]=true;
//    }
//    return min[m];
//}
//
//
//int main()
//{
//    int i,j,a,b,c,m;
//    scanf("%d %d",&n, &m);
//    for (i=0;i<n;i++)
//        for (j=0;j<n;j++)
//            map[i][j] = 1000000036;
//    for(i=0;i<m;i++)
//    {
//        scanf("%d%d%d",&a,&b,&c);
//
//        if (map[a][b] > c)
//            map[a][b]=c;
//    }
//
//    scanf("%d", &m);
//    printf("%d",dij(m));
//
//    while (1);
//    return 0;
//}



//Ã‚3
using namespace std;

char ch[10005];
char ans[10005];
bool b[10005];

int main()
{
    int i,j,k;
    int m,n;
    int s=0, len=0;

    scanf("%s", ch);
    scanf("%d", &m);

    n = strlen(ch);

    k = 0;
    for (i=0;i<n;i++)
        if (ch[i] != '0')
           k++;
    if (k <= m)
    {
          printf("0");
          return 0;
    }

    len = 0;
    memset(b, 0, sizeof(b));
    for (i=0;i<10;i++)
    {
        for (j=s;j<n;j++)
        {
            if (j-s > m or m == 0)
               break;

            if (ch[j] == '0' + i)
            {
                      b[j] = true;
                      for (k=j-1;k>=s;k--)
                      {
                          if (b[k] == true)
                             break;
                          m--;
                      }
                      s = j+1;
            }
            else b[j] = false;
        }
    }
    for (i=0;i<n;i++)
        if (b[i])
        {
                 ans[len] = ch[i];
                 len++;
        }
    for (i=n-1;i>=0;i--)
        if (b[i])
           break;
    for (j=i+1;j<n;j++)
    {
        ans[len] = ch[j];
        len++;
    }
    ans[len] = 0;
    len = 0;
    while(ans[len] == '0' && ans[len] != 0 && len < strlen(ans))
                   len++;

    if (len >= strlen(ans))
        printf("0");
    else
        printf("%s", ans + len);
    while(1);
    return 0;
}


/*
// Ã‚2
using namespace std;

int f[1005];
int A[1005];
int X[1005];

int main()
{
    int i,j,k;
    int m,n;

    scanf("%d %d", &n, &m);

    for (i=0;i<n;i++)
        scanf("%d %d", &A[i], &X[i]);

    for (i=0;i<=m;i++)
        f[i] = 0;

    k = 0;
    for (i=0;i<n;i++)
        for (j=m-X[i];j>=0;j--)
            if (f[j] + A[i] > f[j+X[i]])
            {
               f[j+X[i]] = f[j] + A[i];
               if (f[j+X[i]] > k)
                  k = f[j+X[i]];
            }

    printf("%d", k);

    while(1);
    return 0;
}


3 10
1 3
2 5
4 3
*/

