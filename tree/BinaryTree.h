//
// Created by LFH on 2023/12/28.
//
#include<vector>

#ifndef AWESOME_BINARYTREE_H
#define AWESOME_BINARYTREE_H


class BinaryTree {
public:
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode(int val) : val(val), left(NULL), right(NULL) {}
    };

    void preorderTranversal(TreeNode& root, vector<int>& vec) {

    }
};


#endif //AWESOME_BINARYTREE_H
