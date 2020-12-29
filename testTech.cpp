//
// Created by xutianqi on 2020/11/16.
//

#include <bits/stdc++.h>
using namespace std;
void heapsort(int a[],int left,int right){
    if (left>=right) return;
    int i=left;
    int j=right;
    int base=a[left];
    while (i<j) {
        while (i<j && a[j]>=base) {
            j--;
        }
        while (i<j && a[i]<=base) {
            i++;
        }
        if (i<j) {
            swap(a[i],a[j]);
        }
    }
    swap(a[left],a[i]);
    heapsort(a,left,i-1);
    heapsort(a,i+1,right);
}
int main() {
    int a[]={1,1,2,4,9,8,4,3,5,5,6,7};

    int len=sizeof(a)/sizeof(a[0]);
    heapsort(a,0,len);
    for (int i:a) {
        cout<<i<<endl;
    }

}