#include<iostream>
using namespace std;



class Base{
public:
    virtual void func()=0;
};

class Son:public Base{
public:
    virtual void func(){
        cout<<"funcµ÷ÓÃ"<<endl;
    }
};

void test01(){
    Base *base = new Son;
    base->func();
    delete base;
}

int main(){
    test01();
    return 0;
}