//
// Created by xutianqi on 2020/10/10.
//
# include <bits/stdc++.h>

using namespace std;

int main1(){

    string str;
    cin>>str;
    stack<char> s;
    stack<char> s1;
    for (char & i : str){
        if (i=='<') {
            if (!s.empty())
                s.pop();
        } else {
            s.push(i);
        }
    }
    while (!s.empty()) {
        char ch=s.top();
        s.pop();
        s1.push(ch);
    }
    while (!s1.empty()){
        cout<<s1.top();
        s1.pop();
    }
    cout<<endl;
}

int main2(){
    short b[50];
    long long i,j,k,m,n=0;
    long long x=-1,y=-1;
    bool bo_x=false, bo_y=false;

    scanf("%lld", &m);
    k=m;
    while (k>0){
        b[n]=k%2;
        n++;
        k/=2;
    }
    b[n]=0;
    for (i=0;i<n;i++) {
        if (b[i]==0 && b[i+1]==1 && !bo_x) {
            bo_x=true;
            x=m-(1<<i);
        }
        if (b[i]==1 && b[i+1]==0 && !bo_y) {
            bo_y=true;
            y=m+(1<<i);
        }

    }
    printf("%lld\n%lld", y, x);
}

int main11() {
    char a[100005];

    short b[50];
    int i,j,k,m,n=0;

    scanf("%s", a);
    n=strlen(a);
    m=0;
    for (i=0;i<n;i++) {
        if (a[i]=='<')
        {
            if (m>0) m--;
        }
        else
        {
            a[m]=a[i];
            m++;
        }

    }
    a[m]=0;
    printf("%s\n", a);
}
