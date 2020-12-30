//
// Created by xutianqi on 2020/12/29.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int len=nums.size();
        if (len<2) return 0;
        return mergeSort(nums, 0, len-1);
    }
    int mergeSort(vector<int>& nums, int left, int right) {
        if (left>=right) return 0;

        int mid = left + (right-left)/2;

        int leftpairs=mergeSort(nums, left, mid);
        int rightpairs=mergeSort(nums, mid+1, right);
        if (nums[mid]>nums[mid+1]) {
            int crosspairs= merge(nums, left, mid, right);
            return leftpairs+rightpairs+crosspairs;
        } else return leftpairs+rightpairs;
    }
    int merge(vector<int>& nums, int left, int mid, int right) {
        int len=right-left+1;
        int tmp[len];
        int i=left,j=mid+1,k=0,count=0;
        while (i<=mid && j<=right) {
            if (nums[i]<=nums[j]) {
                tmp[k++]=nums[i++];
            } else {
                tmp[k++]=nums[j++];
                count+=(mid-i+1);
            }
        }
        while (i<=mid)
            tmp[k++]=nums[i++];
        while (j<=right)
            tmp[k++]=nums[j++];

        for (int m=0;m<len;m++) {
            nums[left+m]=tmp[m];
        }
        return count;
    }
};

int main(){
    Solution solution;
    vector<int> nums={7,5,6,4};
    int res=solution.reversePairs(nums);
    cout<<res<<endl;
    return 0;
}