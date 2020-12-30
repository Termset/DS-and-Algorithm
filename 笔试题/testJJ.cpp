//
// Created by xutianqi on 2020/11/2.
//

# include <bits/stdc++.h>

using namespace std;
char ch[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//adgjAfBCdcDEjkfanABCnDEllmb
//out: 21
int main(){
    char str[205];
    int i,j,k,m,n;

    memset(str,0,sizeof(str));
    cin>>str;
    n=strlen(str);
    m=0;
    for (i=0;i<n;i++) str[i+n] = str[i];
    str[n+n]=0;
    for (i=0;i<n;i++)
    if (str[i]>='A' && str[i]<='E')
    {
        k=31;
        for (j=i;j<i+n;j++)
            if (str[j]>='A'&&str[j]<='E'&&(k&(1<<(str[j]-'A')))>0)
            {
                k-=(1<<(str[j]-'A'));
                if (k==0)
                    break;
            }
        if (k==0 && (n-(j-i+1))>m)
            m=n-(j-i+1);
    }
    cout<<m;
    return 0;

}
int main2() {
    vector<int> v(26,0);
    string s;
    cin>>s;
    bool yes= false;
    for (auto str:s){
        v[str-'A']++;
    }
    for (int i=25;i>=0;i--) {
        if (v[i]>=3 && v[i]<=5) {
            cout<<ch[i];
            yes=true;
        }
    }
    if (!yes) cout<<"no";
    cout<<endl;
}