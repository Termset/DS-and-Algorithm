#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

int main2(){
    int n;
    cin>>n;
    vector<int> sz(n);

    for (int i=0;i<n;i++) {
        cin>>sz[i];
    }
    sort(sz.begin(),sz.end());
    int max=1,dec=1;
    //2,3,4,4
    for (int i=1;i<n;i++) {
        if (sz[i]==sz[i-1]) {
            dec++;
            if (dec>max) max=dec;
        } else {
            dec=1;
        }
    }
    cout<<max;
    return 0;
}

int main3(){
    int n,k,num;
    int bigk=0,smallk=0;
    cin>>n>>k;
    vector<int> nums(n);
    for (int i=0;i<n;i++) {
        cin>>num;
        if (num>k) {
            bigk++;
        } else {
            smallk++;
        }
        nums[i]=num;
    }
    if (bigk>smallk) {
        cout<<bigk+smallk;
        return 0;
    }
    int l=0,r=n-1;
    int cut=0;
    while (l<r) {
        if (bigk>smallk) {
            break;
        } else if (nums[l]<=k) {
            l++;
            smallk--;
        } else if (nums[r]<=k) {
            r--;
            smallk--;
        } else {
            l++;
            r--;
            bigk-=2;
            cut++;
        }
    }
    if (l==cut || r==n-1-cut) {
        cout<<bigk+smallk+2*cut;
    } else {
        cout<<bigk+smallk;
    }
    return 0;
}

int cut(vector<int> &nums, int s) {
    int n=nums.size();
    int sum = accumulate(nums.begin(), nums.end(), n);
    if (sum<s) return 0;
    int avg=sum/n;
    for (auto it = nums.begin();it!=nums.end();it++) {
        if (*it<=avg) {
            nums.erase(it);
        }
    }
    if (accumulate(nums.begin(), nums.end(), nums.size())==s) {
        return 1;
    } else {
        cut(nums, s);
    }
}
int main4(){
    int n,q;
    int s;
    cin>>n>>q;
    vector<int> nums(n);
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    for (int i=0;i<q;i++) {
        cin>>s;
//        vector<int> copynums=nums;
//        int res= cut(copynums, s);
        if (accumulate(nums.begin(), nums.end(), n)>=s) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
/**
 * apple 1 10
 * red 2 8
 * @return
 */

struct goods {
    string name;
    int price;
    int nums;
};
int main(){
    int n,m;
    string name;
    int k,r;
    cin>>n>>m;
    map<string, vector<int>> ms;
    for (int i=1;i<n+1;i++) {
        cin>>name>>k>>r;
        ms[name]=vector<int> {k,r};
//        ms.insert(map<string, vector<int>>::value_type(name,{k,r}));
    }
    int ly;
    int sum=0,num=0;
    for (int i=0;i<m;i++) {
        num++;
        cin>>name>>ly;
        if (ms[name][1]>=ly) {
            sum+=ms[name][0]*ms[name][1];
        } else {
            cout<<-num;
            return 0;
        }
    }
    cout<<sum;
    return 0;
}