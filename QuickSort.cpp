//
// Created by xutianqi on 2020/8/31.
//
# include <bits/stdc++.h>

using namespace std;
void exchange(int * a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*序列划分函数*/
int partition(int a[], int p, int r) {
    int key = a[r];//取最后一个
    int i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (a[j] <= key)
        {
            i++;
            //i一直代表小于key元素的最后一个索引，当发现有比key小的a[j]时候，i+1 后交换
            exchange(&a[i], &a[j]);
        }
    }
    exchange(&a[i + 1], &a[r]);//将key切换到中间来，左边是小于key的，右边是大于key的值。
    return i + 1;
}


void quickSort(int left, int right, vector<int>& arr)
{
    if(left >= right)
        return;
    int i, j, base, temp;
    i = left, j = right;
    base = arr[left];  //取最左边的数为基准数
    while (i < j)
    {
        while (arr[j] >= base && i < j)
            j--;
        while (arr[i] <= base && i < j)
            i++;
        if(i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    //基准数归位
    arr[left] = arr[i];
    arr[i] = base;
    quickSort(left, i - 1, arr);//递归左边
    quickSort(i + 1, right, arr);//递归右边
}
/*
 * Dictation
 */
void quickSort2(int left, int right, vector<int> &arr){
    if (left>=right) return;
    int i,j;
    i=left;
    j=right;
    int base,tmp;
    base=arr[left];
    while (i<j){
        while (arr[j]>=base && i<j)
            j--;
        while (arr[i]<=base && i<j)
            i++;
        if (i<j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    //

    arr[left]=arr[i];
    arr[i]=base;

    quickSort2(left, i-1, arr);
    quickSort2(j+1,right,arr);
}
int main() {
//    int d[] = { 6,4,1,8,7,5 };
    vector<int> d = { 6,4,1,8,7,5 };
    cout<<"输入数组 { 6,4,1,8,7,5 } "<<endl;
    quickSort2(0, 5, d);
    for (int i=0; i<d.size();i++){
        cout<<d[i]<<" ";
    }

}

