#include <bits/stdc++.h>

using namespace std;

/*
 * 10 7 3
 * FTFFFTFFFF
 * FFFFFFF
 */

//int main1() {
//    int i,m,k;
//    long long n,l,min,cost;
//    string str;
//    cin>>m>>n>>l;
//    cin>>str;
//    cost=0;
//    k=0;
//    min = n?l:n<l;
//    for (i=0;i<m;i++) {
//        if (k==2 && str[i]=='F') {
//            cost+=min;
//            k=0;
//            i++;
//            if (i==m) break;
//        }
//        if (str[i]=='F') {
//            k++;
//        } else k=0;
//    }
//    cout<<cost;
//}

/*
 * 6 4
 * 2 3 1 2 3 3
 * 1
 * 2
 * 3
 * 4
 */

//int main2() {
//
//    int m,n,i;
//    long long j,k;
//    cin>>m>>n;
//    map<long, vector<int>> nums;
////    long long nums[1000000005][2]={0};
////    vector<vector<int>> nums(m,vector<int> (2));
//    for (i=1;i<=m;i++) {
//        cin>>j;
//        if (nums.find(j)==nums.end()) {
//            nums.insert(pair<int, vector<int>>(j,{i,0}));
//        } else {
//            nums[j][1]=i;
//        }
//    }
//    for (i=0;i<n;i++) {
//        cin>>k;
//        if (nums.find(k)!=nums.end()) {
//            if (nums[k][1]!=0) {
//                cout<<nums[k][0]<<" "<<nums[k][1]<<endl;
//            } else {
//                cout << nums[k][0] << " " << nums[k][0] << endl;
//            }
//        } else {
//            cout<<0<<endl;
//        }
//    }
//    return 0;
//}
/*
 * 1 2 3 4 5 6
 */
int main() {
    int n,k;
    int num;
//    vector<int> nums;
    int nums[n];
    cin>>n>>k;
    for (int i=0;i<n;i++) {
        cin>>num;
        nums[i]=num;
    }
    int dp[n];
    for (int i=0;i<k-1;i++) {
        dp[k-1] ^= nums[i];
    }
    for (int j=k;j<n;j++) {
        dp[j] ^= dp[j-1];
        dp[j] &= dp[j-k];
    }
//    auto res=max_element(dp.begin(), dp.end());
    int res=0;
    for (int m=k-1;m<j;m++) {
        res = dp[m]?res:dp[m]>res;
    }
    cout<<res<<endl;
    return 0;

}