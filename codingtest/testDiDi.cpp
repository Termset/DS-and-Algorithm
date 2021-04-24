//
// Created by xutianqi on 2020/9/13.
//
# include <bits/stdc++.h>

using namespace std;

typedef std::function<int(int, std::string)> testFuncCallback;
void func1(int a, std::string b)
{

}
int func2(int a, std::string b)
{
    return 0;
}
int func3(std::string a, int b)
{
    return 0;
}
int func4(int a, int b, std::string c)
{
    return 0;
}
std::string func5(int a, int b)
{
    return "";
}
int main(void)
{
    std::vector<testFuncCallback> testFuncCallbackVec;
    testFuncCallbackVec.push_back(func1);//1
    testFuncCallbackVec.push_back(func2);//2
    testFuncCallbackVec.push_back(func3);//3
    testFuncCallbackVec.push_back(func4);//4
    testFuncCallbackVec.push_back(func5);//5
    return 0;
}