//
// Created by xutianqi on 2020/9/13.
//

# include <bits/stdc++.h>

using namespace std;

//t1
//int lengthOfLongsubstr(string s){
//    int start=-1, m=0;
//    int n=s.size();
//    unordered_set<char> mapa;
//    for (int i=0;i<n;++i)
//    {
//        if (i!=0){
//            mapa.erase(s[i - 1]);
//        }
//        while (start+1 < n && !mapa.count(s[start + 1]))
//        {
//            mapa.insert(s[start + 1]);
//            ++start;
//        }
//        m=max(m,start - i + 1);
//    }
//    return m;
//}
//int main(){
//    string ch;
//    cin>>ch;
//    int ans;
//    ans=lengthOfLongsubstr(ch);
//    cout<<ans;
//}

// t2
/*
 * 样例输入
 * 3 2 3
 * 样例输出
 * 3
 */
//int majorElement(vector<int>& nums){
//    unordered_map<int,int> maj;
//    int most=0,count=0;
//    for (int num:nums){
//        ++maj[num];
//        if (maj[num]>count){
//            most=num;
//            count=maj[num];
//        }
//    }
//    return most;
//}
//
//int main(){
//    vector<int> nums;
//    int num,most;
//    do {
//        cin>>num;
//        nums.push_back(num);
//    } while (getchar()!='\n');
//    most=majorElement(nums);
//    cout<<most;
//}
// 3数之和

vector<vector<int>> Sumthree(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> results;
    for (int i=0;i<n;++i){
        if (i>0 && nums[i] == nums[i-1]) {
            continue;
        }
        int t = n-1;
        int tar = -nums[i];
        for (int s=i+1;s<n;++s) {
            if (s>i+1 && nums[s] == nums[s-1]) {
                continue;
            }
            while (s<t && nums[s] + nums[t]> tar){
                --t;
            }

            if (s==t){
                break;
            }
            if (nums[s] + nums[t] == tar) {
                results.push_back({nums[i], nums[s], nums[t]});
            }
        }
    }
    return results;
}

int main(){
    vector<int> nums;
    vector<vector<int>> res;
    int num,most;
    do {
        cin>>num;
        nums.push_back(num);
    } while (getchar()!='\n');
    res = Sumthree(nums);
    for (auto & re : res){
        for (int j : re){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}