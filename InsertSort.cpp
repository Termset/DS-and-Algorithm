//
// Created by xutianqi on 2020/10/5.
//
#include <iostream>
using namespace std;

void insertSort(int *a, int n){
    //临时变量,存放需要移动的元素
    int temp = 0;
    int i, j;
    for (i = 1; i < n; ++i){
        temp = a[i];
        for (j = i; a[j - 1] > temp && j > 0; --j){
            a[j] = a[j - 1];
        }
        a[j] = temp;
    }
}

int main(){
    int a[7] = { 22, 1, 3, 4, 5, 99, 8 };
    insertSort(a, 7);
    for (int i : a)
        cout << i << " ";

    system("pause");
    return 0;
}