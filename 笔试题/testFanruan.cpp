//
// Created by xutianqi on 2020/9/17.
//

# include <bits/stdc++.h>

using namespace std;

/*
3 3 4 3
1:5 3:8 5:1
1:2 2:2 4:3  5:2
2:3 4:4 6:3
 */
struct node{
    int K;
    int V;
    node *next;
};
int a[20];

void get(char *ch, int *k, int *m){
    int ans=0;
    for (int i=0;i<strlen(ch);i++)
    {
        if (ch[i]!=':')
            ans = ans*10 + (ch[i]-'0');
        else
        {
            *k=ans;
            ans=0;
        }
    }
    *m=ans;
}
node *new_node(int k, int v){
    node *temp=new node;
    temp->K=k;
    temp->V=v;
    temp->next=nullptr;
    return temp;
}
int main(){
    int i,j,k,m,n;
    char ch[100];
    node *head=nullptr, *son=nullptr, *before=nullptr, *temp;
    scanf("%d", &n);
    for (i=0;i<n;i++) scanf("%d", &a[i]);
    for (i=0;i<n;i++)
    {
        son=head;
        before=head;
        for (j=0;j<a[i];j++)
        {
            scanf("%s",ch);
            get(ch,&k,&m);
            if (head==nullptr)
            {
                head=new_node(k,m);
                son=head;
                continue;
            }
            while (son!=nullptr && son->K<k)
            {
                before=son;
                son=son->next;
            }
            if (son==nullptr)
            {
                son = new_node(k,m);
                before->next=son;
                before=son;
                continue;
            }
            if (son->K==k)
            {
                son->V +=m;
                before=son;
            }
        }
    }
    son=head;
    while (son!=nullptr)
    {
        printf("%d:%d ", son->K, son->V);
        son=son->next;
    }
    return 0;
}