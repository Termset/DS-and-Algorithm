//
// Created by xutianqi on 2020/9/4.
//
# include <bits/stdc++.h>

using namespace std;

// 顺时针打印矩阵
// 1 2 3
// 4 5 6
// 7 8 9  ----->  123698745
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if(matrix.empty()||matrix[0].empty())
            return result;

        int l= 0, r= matrix[0].size()- 1;
        int t= 0, b= matrix.size()- 1;
        int i= 0, j= 0;
        while(true){
            // 向左，top减一
            j= l; t++;
            while(j<= r) result.push_back(matrix[i][j++]);
            j--;
            if(t> b) break;

            // 向下，right减一
            i= t; r--;
            while(i<= b) result.push_back(matrix[i++][j]);
            i--;
            if(l> r) break;

            // 向右，bottom减一
            j= r; b--;
            while(j>= l) result.push_back(matrix[i][j--]);
            j++;
            if(t> b) break;

            // 向上，left减一
            i= b; l++;
            while(i>= t) result.push_back(matrix[i--][j]);
            i++;
            if(l> r) break;
        }
        return result;
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix= {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> results;
    results = s.spiralOrder(matrix);
    for (int i=0;i<results.size();i++){
        cout<<results[i]<<' ';
    }
}

// 题3 求字符串碎片平均长度（保留整数）
// aaabbaaac 碎片为 aaa bb aaa c 平均长度为（3+2+3+1）/4=2
//int main()
//{
//    string str ;
//    cin >> str;
//    double count = 0;
//    double len = str.size();
//    //cout << len <<endl;
//    for(int i = 0 ;i<len;++i)
//    {
//        if(str[i]!=str[i+1])
//            count++;
//    }
//    //这里有要求控制输出保留两位小数
//    cout<<setprecision(2)<<fixed<<len/count<<endl;
//    return 0;
//}
//class Solution
//{
//public:
//    int GetFragment(string str) {
//        int count,num;
//        int len = str.size();
//        for(int i = 0 ;i<len;++i)
//        {
//            if(str[i]!=str[i+1])
//                count++;
//        }
//        num = len/count;
//        return num;
//    }
//};

