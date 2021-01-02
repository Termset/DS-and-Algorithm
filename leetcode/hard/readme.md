[**剑指 Offer 51.数组中的逆序对**](https://leetcode-cn.com/problems/shu-zu-zhong-de-ni-xu-dui-lcof/)   
在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。
输入一个数组，求出这个数组中的逆序对的总数。

示例 1:

输入: `[7,5,6,4]`

输出: `5`

限制：
`0 <= 数组长度 <= 50000`        
[**reversePairs.cpp**](leetcode/hard/reversePairs)

[**239. 滑动窗口最大值**](https://leetcode-cn.com/problems/sliding-window-maximum/)    
给你一个整数数组 nums，有一个大小为k的滑动窗口从数组的最左侧移动到数组的最右侧。你只可以看到在滑动窗口内的k个数字。滑动窗口每次只向右移动一位。

返回滑动窗口中的最大值。    
示例 1：
```
输入：nums = [1,3,-1,-3,5,3,6,7], k = 3
输出：[3,3,5,5,6,7]
解释：
滑动窗口的位置                最大值
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
```
[**maxSlidingWindow.cpp**](leetcode/hard/maxSlidingWindow.cpp)