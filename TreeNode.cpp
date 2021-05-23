//
// Created by xutianqi on 2021/5/23.
//

#include<iostream>
#include<vector>
using namespace std;

//Definition for a binary tree node
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){};//无参构造
    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> tmp;
void preOrder(TreeNode* root);

int main(){

    auto* lchild = new TreeNode(3);
    auto* rchild = new TreeNode(8);
    auto* root = new TreeNode(5,lchild,rchild);

    preOrder(root);

    for(auto x : tmp)
        cout << x << " ";
    cout << endl;
}

void preOrder(TreeNode* root){
    if(!root)
        return ;
    tmp.push_back(root->val);
    preOrder(root->left);
    preOrder(root->right);
}