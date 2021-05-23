//
// Created by xutianqi on 2021/5/16.
//

#include <iostream>

using namespace std;

class Singleon{
private:
    Singleon()
    {
        cout<<"创建Singleon类"<<endl;
    }
    static Singleon* instance;
public:
    static Singleon* GetSingleon(){
        return instance;
    }
    static Singleon* Destroy(){
        delete instance;
    }
};

Singleon* Singleon::instance = new Singleon;

int main(){
    Singleon* sl1 = Singleon::GetSingleon();
    Singleon* sl2 = Singleon::GetSingleon();
    Singleon* sl3 = Singleon::GetSingleon();
    Singleon* sl4 = Singleon::GetSingleon();


    cout<<sl1<<endl;
    cout<<sl2<<endl;
    cout<<sl3<<endl;
    cout<<sl4<<endl;

    return 0;
}