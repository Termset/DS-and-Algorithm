//
// Created by xutianqi on 2020/9/3.
//

# include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};


class Solution {
public:
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        if(pRoot==nullptr) return nullptr;
        int node_count = nodeCount(pRoot->left);
        if (k <= node_count)
            return KthNode(pRoot->left, k);
        if (k == node_count + 1)
            return pRoot;
        return KthNode(pRoot->right, k - node_count-1);
    }
    int nodeCount(TreeNode* root) {
        if (root == nullptr)
            return 0;
        return nodeCount(root->left) + nodeCount(root->right) + 1;
    }


};
