//
// Created by xutianqi on 2020/9/24.
//

# include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j,m,n;
    int a,b,k,v;
    while (cin>>a>>b>>k>>v)
    {
        m=a/v; // 需要多少个隔间
        if (a%v!=0) m++;
        n=m-(b*(k-1)); //每个箱子增加的空间
        if (n<b) n=b;
        cout<<n<<endl;
    }
}

int main2(){
    long long n,m,s,t;
    cin>>n>>m>>s>>t;
    long long u[100000],v[100000],w[100000];
    for (long long i=0;i<m;i++){
        cin>>u[i]>>v[i]>>w[i];
    }
    cout<<w[m/2];
}