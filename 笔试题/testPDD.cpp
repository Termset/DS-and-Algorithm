//
// Created by xutianqi on 2020/9/1.
//

# include <bits/stdc++.h>

using namespace std;
int b[205][205];
int main(){
//    int n=4;
//    cin>>n;
    int i,j,k,m,n;
    cin>>n;
    memset(b,0,sizeof(b));
    for (i=1;i<n;i++){
        for (j=1;j<n;j++){
            if (i<=n/2 && j<=n/2 && i>j)
                b[i][j]=3;
            else if (i<=n/2 && j<=n/2 && i<j)
                b[i][j]=2;
            else if (i>(n/2) && j<=n/2 && (n-i+1)>j)
                b[i][j]=1;
            else if (i>n/2 && j<=n/2 && (n-i)<j)
                b[i][j]=8;

            else if (i<=n/2 && j<=n/2 && n-i<n-j)
                b[i][j]=4;
            else if (i<=n/2 && j<=n/2 && n-i>n-j)
                b[i][j]=5;
            else if (i>n/2 && j>n/2 && i>j)
                b[i][j]=7;
            else if (i>n/2 && j>n/2 && i<j)
                b[i][j]=6;
        }
    }
    for (i=1;i<=n;i++){
        printf("%d", b[i][1]);
        for (j=2;j<=n;j++){
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }

}
//int main(){
////    int n=4;
////    cin>>n;
//    int k,m,n;
//    cin>>n;
//    memset(b,0,sizeof(b));
//
//    b[1][n-1] = 1;
//    b[1][2] = 2;
//    b[2][1] = 3;
//    b[n-1][1] = 4;
//    b[n][2] = 5;
//    b[n][n-1] = 6;
//    b[n-1][n] = 7;
//    b[2][n] = 8;
//
//    for (int i=1;i<=n;i++){
//        printf("%d", b[i][1]);
//        for (int j=2;j<=n;j++){
//            printf(" %d", b[i][j]);
//        }
//        printf("\n");
//    }
//}
/*
 * 0 2 2 1 1 0
 * 3 0 2 1 0 8
 * 3 3 0 0 8 8
 * 4 4 0 0 7 7
 * 4 0 5 6 0 7
 * 0 5 5 6 6 0
 *
 *
 * 0 2 2 0 1 1 0
 * 3 0 2 0 1 0 8
 * 3 3 0 0 0 8 8
 * 0 0 0 0 0 0 0
 * 4 4 0 0 0 7 7
 * 4 0 5 0 6 0 7
 * 0 5 5 0 6 6 0
 */
int a[20];

int calu(int x,int y){
    int tmp;
    if (x<y) {
        tmp = x;
        x = y;
        y = tmp;
    }
    while (y!=0) {
        tmp=x%y;
        x=y;
        y=tmp;
    }
    return x;
}
int main(){
    int i,j,k,m,n;
    int x,y,z;
    int ans=0;
    cin>>n>>m;
    for (i=0;i<m;i++){
        cin>>a[i];
        ans += (n/a[i]);
    }
    for (i=0;i<m-1;i++)
        for (j = i+1; j < m; j++) {
            k = calu(a[i], a[j]);
            ans -= (n/(a[i]*a[j]/k));
        }
    for (i=0;i<m-2;i++){
        for (j=i+1;j<m-1;j++){
            for (j=j+1;j<m-1;j++){
                x=calu(a[i],a[j]);
                y=a[i]*a[j]/x;
                z=calu(y,a[k]);
                ans+=(n/(y*a[k]/z));
            }
        }

    }
    printf("%d", ans);
    return 0;

}