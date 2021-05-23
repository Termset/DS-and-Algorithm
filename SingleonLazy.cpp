//
// Created by xutianqi on 2021/5/17.
//
#include <iostream>
#include <mutex>

using namespace std;

class Singleon{
protected:
    Singleon(){
        pthread_mutex_init(&mutex);
    }
private:
    static Singleon* instance;

public:
    static pthread_mutex_t mutex;
    static Singleon* GetInstance(){
        if (instance==nullptr) {
            pthread_mutex_lock(&mutex);
            if (instance==nullptr){
                instance = new Singleon;
            }
            pthread_mutex_unlock(&mutex);
        }
    };
};

Singleon* Singleon::instance=nullptr;