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

/*���л��ֺ���*/
int partition(int a[], int p, int r) {
    int key = a[r];//ȡ���һ��
    int i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (a[j] <= key)
        {
            i++;
            //iһֱ����С��keyԪ�ص����һ���������������б�keyС��a[j]ʱ��i+1 �󽻻�
            exchange(&a[i], &a[j]);
        }
    }
    exchange(&a[i + 1], &a[r]);//��key�л����м����������С��key�ģ��ұ��Ǵ���key��ֵ��
    return i + 1;
}


void quickSort(int left, int right, vector<int>& arr)
{
    if(left >= right)
        return;
    int i, j, base, temp;
    i = left, j = right;
    base = arr[left];  //ȡ����ߵ���Ϊ��׼��
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
    //��׼����λ
    arr[left] = arr[i];
    arr[i] = base;
    quickSort(left, i - 1, arr);//�ݹ����
    quickSort(i + 1, right, arr);//�ݹ��ұ�
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
    cout<<"�������� { 6,4,1,8,7,5 } "<<endl;
    quickSort2(0, 5, d);
    for (int i=0; i<d.size();i++){
        cout<<d[i]<<" ";
    }

}

