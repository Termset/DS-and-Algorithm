//
// Created by xutianqi on 2020/9/15.
//

# include <bits/stdc++.h>

using namespace std;

/*
 * 去除重复字符
 */
char s[1000];
bool rept[300];

int main(){
    int i;
    gets(s);
    memset(rept,0,sizeof(rept));
    for (i=0;i<strlen(s);i++)
    {
        if (!rept[s[i]])
        {
            printf("%c", s[i]);
            rept[s[i]] = true;
        }
    }
    return 0;
}

/*
 * 给定一个只包括'(',')','{','}','[',']' 的字符串,判断字符串是否有效。

有效字符串需满足:

   1.左括号必须用相同类型的右括号闭合。

   2. 左括号必须以正确的顺序闭合。

注意空字符串可被认为是有效字符串。
 */

//bool isValid(const string& s){
//    vector<char> a;
//    for(char i : s)
//    {
//        if (i=='(')
//            a.push_back(')');
//        else if (i=='{')
//            a.push_back('}');
//        else if (i=='[')
//            a.push_back(']');
//        else if (!a.empty() && i==a.back())
//            a.pop_back();
//        else
//            return false;
//    }
//    return a.empty();
//}
//
//int main(){
//    string s;
//    while (getline(cin, s))
//    {
//        if (isValid(s))
//            printf("true\n");
//        else
//            printf("false\n");
//    }
//    return 0;
//}

