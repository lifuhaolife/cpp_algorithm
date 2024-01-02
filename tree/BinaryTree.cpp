//
// Created by LFH on 2023/12/28.
//

#include "BinaryTree.h"
#include "vector"

int main() {
    BinaryTree* binaryTree = new BinaryTree();
    std::vector<int> vec;
    BinaryTree::TreeNode*  root = new BinaryTree::TreeNode(1);
    binaryTree->preorderTranversal(root, vec);

}