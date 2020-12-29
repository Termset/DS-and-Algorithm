//
// Created by xutianqi on 2020/11/15.
//
# include <bits/stdc++.h>

using namespace std;


class OrderedStream {
public:
    vector<string> s;
    int ptr;

    OrderedStream(int n) {
        memset(s,NULL,n);
        ptr=1;
    }

    vector<string> insert(int id, string value) {
        s[id]=value;
        vector<string> re;
        while (s[id]!=NULL) {
            re.push_back(s[ptr]);
            ptr++;
        }
        return re;
    }
};
int main() {
    OrderedStream os= *new OrderedStream(5);
    os.insert(3, "ccccc");
}

