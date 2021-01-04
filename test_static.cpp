//
// Created by xutianqi on 2021/1/2.
//

#include <iostream>
#include <string>
using namespace std;
class Apple
{
public:
    static int i;
    Apple()
    {

    };
};
class Apple2
{
public:
    static const int i=10;
    Apple2()
    {

    };
};
int Apple::i=1;

void demo()
{
    static int count = 0;  // 静态变量
    cout << count << " ";
    count++;
}

int main()
{
    for (int i=0; i<5; i++)
        demo();
    return 0;
}
