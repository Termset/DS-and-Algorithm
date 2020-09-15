//
// Created by xutianqi on 2020/9/8.
//
# include <bits/stdc++.h>

using namespace std;
/*
 * 题1 敏感词检测
 * 样例输入
 * you
 * i love you,oyu love me
 * jack
 * 样例输出
 * i love jack,jack love me
 */
//int main(){
//    string ch1,ch2,chs;
//    getline(cin,ch1);
//    getline(cin,chs);
//    getline(cin,ch2);
//    sort(ch1.begin(),ch1.end());
//    int flag;
//    do{
//        flag = chs.find(ch1, 0);
//        while (flag != string::npos) {
//            chs.replace(flag, ch1.size(), ch2);
//            flag = chs.find(ch1, flag + 1);
//        }
//    }while (next_permutation(ch1.begin(),ch1.end()));
//    cout<<chs<<endl;
//    return 0;
//}

/*
 * 题2 订单系统工作流路径解析
 * 输入：a bc d eag f
 * 输出：
 * abdef
 * abdaf--circular dependency
 * abdgf
 * acdef
 * acdaf--circular dependency
 * acdgf
 */
//char ch[10005];
//char a[1005][26];
//int b[35];
//void printrounte(int x,int y,bool f){
//    if (x==y){
//        if (f)
//            printf("%s--circular dependency\n", ch);
//        else
//            printf("%s\n",ch);
//        return ;
//    }
//    for (int i=0;i<strlen(a[x]);i++){
//        ch[x]=a[x][i];
//        b[ch[x]-'a']++;
//        if (b[ch[x]-'a']>1)
//            printrounte(x+1,y,true);
//        else
//            printrounte(x+1,y,f);
//        b[ch[x]-'a']--;
//
//    }
//
//}
//
//int main(){
//    int i,j,k,m,n;
//    gets(ch);
//    n=strlen(ch);
//    m=0;
//    k=0;
//    memset(a,0,sizeof(a));
//    for (i=0;i<n;i++){
//        if (ch[i]==' '){
//            a[m][k]=0;
//            m++;
//            k=0;
//        }
//        else
//        {
//            a[m][k]=ch[i];
//            k++;
//        }
//    }
//    memset(b,0,sizeof(b));
//    memset(ch, 0, sizeof(ch));
//    printrounte(0,m+1,false);
//
//    return 0;
//}
/*
 * 题3 电瓶车最短路径
 */
int mapa[1005][1005];
int m,n,L,X;
int a[10];
int b[10];
int min_path;
int ans;
void find(int x, int y,int yd,int nNUm, int fx,int tot, int min){
    if (x==m-1 && y==n-1)
    {
        if (min<min_path)
        {
            min_path=min;
            ans=tot;
        }
        return;
    }
    if (fx>0 && (x+a[fx]<m&&x+a[fx]>=0 && y+b[fx]<n&&y+b[fx]>=0&&yd>=mapa[x+a[fx]][y+b[fx]]))
    {
        find(x+a[fx],y+b[fx],yd-mapa[x+a[fx]][y+b[fx]],nNUm,fx,tot+1,min+mapa[x+a[fx]][y+b[fx]]);
        return ;
    }
    if (fx>0&&x+a[fx]<m&&x+a[fx]>=0&&y+b[fx]<n&&y+b[fx]>=0&&yd<mapa[x+a[fx]][y+b[fx]]&&nNUm)
    {
        yd=L;
        nNUm--;
    }
    for (int i=0;i<4;i++)
    {
        if (x+a[i]<m&&x+a[i]>=0&&y+b[i]<n&&y+b[i]>=0&&yd>=mapa[x+a[i]][y+b[i]])
        {
            find(x+a[i],y+b[i],yd-mapa[x+a[i]][y+b[i]],nNUm,i,tot+1,min+mapa[x+a[i]][y+b[i]]);
        }
    }
}

int main(){
    int i,j,k;

    scanf("%d%d%d%d%d",&m,&n,&k,&X,&L);
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
            scanf("%d",&mapa[i][j]);
    a[0]=1;a[1]=-1;a[2]=0;a[3]=0;
    b[0]=0;b[1]=-1;a[2]=1;b[3]=-1;
    ans=0;
    min_path=1000000005;
    find(0,0,k,X,-1,0,0);
    printf("%d", ans);
    return 0;
}
