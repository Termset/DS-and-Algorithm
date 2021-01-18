[**56. 合并区间**](https://leetcode-cn.com/problems/merge-intervals/)   
给出一个区间的集合，请合并所有重叠的区间。   
示例 1:

输入: intervals = [[1,3],[2,6],[8,10],[15,18]]    
输出: [[1,6],[8,10],[15,18]]  
解释: 区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].  
示例2:

输入: intervals = [[1,4],[4,5]]
输出: [[1,5]]
解释: 区间 [1,4] 和 [4,5] 可被视为重叠区间。

[**mergeIntervals**](leetcode/medium/mergeIntervals.cpp)

[**435. 无重叠区间**](https://leetcode-cn.com/problems/non-overlapping-intervals/)   
给定一个区间的集合，找到需要移除区间的最小数量，使剩余区间互不重叠。

注意:

可以认为区间的终点总是大于它的起点。
区间 `[1,2]` 和 `[2,3] `的边界相互“接触”，但没有相互重叠。     
示例 1:
```
输入: [ [1,2], [2,3], [3,4], [1,3] ]

输出: 1

解释: 移除 [1,3] 后，剩下的区间没有重叠。
```
示例 2:
```
输入: [ [1,2], [1,2], [1,2] ]

输出: 2

解释: 你需要移除两个 [1,2] 来使剩下的区间没有重叠。
```
示例 3:
```
输入: [ [1,2], [2,3] ]

输出: 0

解释: 你不需要移除任何区间，因为它们已经是无重叠的了。
```
[**399. 除法求值**](https://leetcode-cn.com/problems/evaluate-division/)  
给你一个变量对数组 equations 和一个实数值数组 values 作为已知条件，其中` equations[i] = [Ai, Bi] `和 `values[i]` 共同表示等式 `Ai / Bi = values[i]` 。每个 Ai 或 Bi 是一个表示单个变量的字符串。

另有一些以数组 queries 表示的问题，其中 `queries[j] = [Cj, Dj]` 表示第 j 个问题，请你根据已知条件找出` Cj / Dj = ? `的结果作为答案。

返回 所有问题的答案 。如果存在某个无法确定的答案，则用 -1.0 替代这个答案。

注意：输入总是有效的。你可以假设除法运算中不会出现除数为 0 的情况，且不存在任何矛盾的结果。
示例一：

```
输入：equations = [["a","b"],["b","c"]], values = [2.0,3.0], queries = [["a","c"],["b","a"],["a","e"],["a","a"],["x","x"]]
输出：[6.00000,0.50000,-1.00000,1.00000,-1.00000]
解释：
条件：a / b = 2.0, b / c = 3.0
问题：a / c = ?, b / a = ?, a / e = ?, a / a = ?, x / x = ?
结果：[6.0, 0.5, -1.0, 1.0, -1.0 ]
```

示例二：
```
输入：equations = [["a","b"],["b","c"],["bc","cd"]], values = [1.5,2.5,5.0], queries = [["a","c"],["c","b"],["bc","cd"],["cd","bc"]]
输出：[3.75000,0.40000,5.00000,0.20000]
```
[**calcEquation**](leetcode/medium/calcEquation.cpp)

[**547. 省份数量**](https://leetcode-cn.com/problems/number-of-provinces/)

有 n 个城市，其中一些彼此相连，另一些没有相连。如果城市 a 与城市 b 直接相连，且城市 b 与城市 c 直接相连，那么城市 a 与城市 c 间接相连。

省份 是一组直接或间接相连的城市，组内不含其他没有相连的城市。

给你一个 n x n 的矩阵 isConnected ，其中 isConnected[i][j] = 1 表示第 i 个城市和第 j 个城市直接相连，而 isConnected[i][j] = 0 表示二者不直接相连。

返回矩阵中 省份 的数量。

示例一：
```
输入：isConnected = [[1,1,0],[1,1,0],[0,0,1]]
输出：2
```

示例二：
```
输入：isConnected = [[1,0,0],[0,1,0],[0,0,1]]
输出：3
```
[**深度优先搜索：findCircleNum.cpp**](leetcode/medium/findCircleNum.cpp)   
[**并查集：findCircleNum2.cpp**](leetcode/medium/findCircleNum2.cpp)
