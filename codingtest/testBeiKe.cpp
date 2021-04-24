//
// Created by xutianqi on 2020/9/7.
//

# include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j=0,k,m,n;
    cin>>n;
    char str1[9] = "63231323";
    char str2[9] = "53231323";
    char str3[9] = "43231323";
    char ch[1005];
    for (k=0;k<n;k++){
        cin>>ch;
        m=0;
        for (j=0;ch[j]!='\000';j++){
            for (i=0;i<sizeof(str1)-1;i++) {
                if (i == 7 && ch[j] == str2[i])
                    m += 1;
                else if (ch[j] == str1[i]){
                    j++;
                }
                else break;
            }
            for (i=0;i<sizeof(str2)-1;i++) {
                if (i == 7 && ch[j] == str2[i])
                    m += 1;
                else if (ch[j] == str2[i]){
                    j++;
                }
                else break;
            }
            for (i=0;i<sizeof(str3)-1;i++) {
                if (i == 7 && ch[j] == str3[i])
                    m += 1;
                else if (ch[j] == str3[i]){
                    j++;
                }
                else break;
            }

            }
        cout<<m<<endl;
    }
    return 0;


}