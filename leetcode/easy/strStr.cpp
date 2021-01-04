//
// Created by xutianqi on 2021/1/4.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(), m=needle.size();
        if (m==0) return 0;
        int pn=0;
        while (pn<n-m+1) {
            while (pn<n-m+1 && haystack[pn]!=needle[0]) pn++;
            // if (pn==L-n+1 && haystack[pn]!=needle[0]) return -1;
            int pm=0, curLen=0;
            while (pn<n && pm<m && haystack[pn]==needle[pm]) {
                pn++;
                pm++;
                curLen++;
                if (curLen==m) return pn-m;
            }
            pn=pn-curLen+1;
        }
        return -1;
    }
};