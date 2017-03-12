//
// Created by 王青龙 on 2017/3/12.
//

#include <stack>
#include "solution.h"

std::vector<int> Solution::inorderTraversal(TreeNode *root) {
    if (root == NULL) {
        return std::vector<int>();
    }
    std::vector<int> res;
    std::stack<TreeNode *> treeStack;
    auto curNode = root;
    while (curNode || !treeStack.empty()) {
        if (curNode) {
            treeStack.push(curNode);
            curNode = curNode->left;
        } else {
            curNode = treeStack.top();
            res.push_back(curNode->val);
            treeStack.pop();
            curNode = curNode->right;
        }
    }
    return res;
}
