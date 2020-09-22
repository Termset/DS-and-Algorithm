//
// Created by xutianqi on 2020/9/20.
//
#include<iostream>
using namespace std;
class test {
private :
    char c='1';//1byte
    int i;//4byte
    short s=2;//2byte
};
class test2 {
private:
    int i;//4byte
    char c = '1';//1byte
    short s = 2;//2byte
};

typedef struct _A{
char a; //1
int b; //4
float c; //4
double d; //8
int *pa; //4
char* pc; //4
short e; //2
}A;

#pragma pack(4)
typedef struct _A2{
    char a;
    int b;
    float c;
    double d;
    int *pa;
    char* pc;
    short e;
}A2;

int main(){
    char c;
    int i;
    short s;
    unsigned int ui;
    long l;
    long long ll;
    double d;
    float f;
    int *p;
    char* cp;
    int a[3][4];

    printf("char %d\n", sizeof(c));
    printf("int %d\n", sizeof(i));
    printf("short %d\n", sizeof(s));
    printf("unsigned %d\n", sizeof(ui));
    printf("long %d\n", sizeof(l));
    printf("long long %d\n", sizeof(ll));
    printf("double %d\n", sizeof(d));
    printf("float %d\n", sizeof(f));
    printf("int* p %d\n", sizeof(p));
    printf("char* cp %d\n", sizeof(cp));
    printf("%d %d\n", sizeof(a), sizeof(a[0]));

    cout << sizeof(test) << endl; // 12
    cout << sizeof(test2) << endl; // 8
    printf("size = %d\n",sizeof(A));
    printf("size = %d\n",sizeof(A2));

    return 0;
}