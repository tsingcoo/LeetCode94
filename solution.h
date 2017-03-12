//
// Created by 王青龙 on 2017/3/12.
//

#ifndef LEETCODE94_SOLUTION_H
#define LEETCODE94_SOLUTION_H

#include <vector>

struct TreeNode{
    int val;
    TreeNode * left;
    TreeNode * right;
};

class Solution{
public:
    std::vector<int> inorderTraversal(TreeNode * root);
};

#endif //LEETCODE94_SOLUTION_H
