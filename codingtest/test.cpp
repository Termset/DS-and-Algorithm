//
// Created by xutianqi on 2020/10/27.
//
# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        vector<string> tmpstr;
        dfs(s,-1,1,tmpstr,res);
        return res;
    }
    void dfs(string s,int index,int level,vector<string> tmpstr,vector<string>& res) {
        if (level==5 || index==s.size()-1) {
            if (level==5 && index==s.size()-1) {
//                res.push_back(tmpstr);
                for (auto k:tmpstr) {
                    cout<<k<<'.';
                }
                cout<<endl;
            }
            return;
        }
        for (int i=1;i<4;i++) {
            if (index+i>=s.size()) return;
            string str=s.substr(index+1,i);
            if (stoi(str)<256 && (str=="0" || str[0]!='0')) {
                tmpstr.push_back(str);
//                if (i!=4) tmpstr+='.';
                dfs(s,index+i,level+1,tmpstr,res);
                tmpstr.pop_back();

            }
        }
    }
};

int main(){
    Solution s;
    s.restoreIpAddresses("1111");
    return 0;
}