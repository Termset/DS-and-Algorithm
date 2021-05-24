#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[])
{
    shared_ptr<int> pInt = make_shared<int>(702);
    shared_ptr<string> pStr = make_shared<string>("ISMILELI");
    if(!pInt /*&& pInt->empty()*/)
    {
        cout << "pInt is empty!" << endl;
    }
    else
    {
        cout << "pInt.use_count=" << pInt.use_count() << "\n*pInt=" << *pInt << endl;
    }
    if(pStr->empty())
    {
        cout << "pStr is empty!" << endl;
    }
    else
    {
        cout << "pStr.use_count=" << pStr.use_count() << "\n*pStr=" << *pStr << endl;
    }
    shared_ptr<int> pInt2(new int(419));
    if(pInt2)
        cout << "pInt2=" << *pInt2 << endl;
    pInt2.reset(new int(100));
    cout << "pInt2.reset()=" << *pInt2 << endl;
    cout << "==============test unique_ptr===============" << endl;
    unique_ptr<int> pIntUnique(new int(1000));
    cout << "pIntUnique:" << *pIntUnique << endl;
    unique_ptr<int> pIntUnique2(pIntUnique.release());
    if(!pIntUnique)
    {
        cout << "pIntUnique is release!" << endl;
    }
    if(pIntUnique2)
    {
        cout << "pIntUnique2:" << *pIntUnique2 << endl;
    }
    unique_ptr<int[]> pIntUnique3(new int[10]);
    //pIntUnique3.release();
    for(int i=0; i<10; i++)
    {
        pIntUnique3[i] = i;
        cout << " pIntUnique3["<< i << "]=" << pIntUnique3[i];
    }
    cout << endl;
    pIntUnique3.release();
    cout << "==============test weak_ptr===============" << endl;
    auto pShared = make_shared<int>(702);
    weak_ptr<int> pIntWeak(pShared);
    cout << "pShared use_count=" << pShared.use_count() << " *pShared="<< *pShared << endl;
    shared_ptr<int> pWShared = pIntWeak.lock();
    cout << "pShared use_count=" << pShared.use_count() << " *pWShared="<< *pWShared <<endl;
    cout << "Hello World!" << endl;
    return 0;
}
