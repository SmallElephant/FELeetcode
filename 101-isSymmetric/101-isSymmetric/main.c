//
//  main.c
//  101-isSymmetric
//
//  Created by FlyElephant on 2017/9/11.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool checkSymmetric(struct TreeNode* left, struct TreeNode* right) {
    if (left == NULL && right == NULL) {
        return true;
    } else if (left == NULL || right == NULL) {
        return false;
    } else {
        if (left->val != right->val) {
            return false;
        }
        bool isleft = checkSymmetric(left->left, right->right);
        bool isright = checkSymmetric(left->right, right->left);
        return isleft && isright;
    }
}

bool isSymmetric(struct TreeNode* root) {
    if (!root) {
        return true;
    }
    return checkSymmetric(root->left, root->right);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    struct TreeNode node1 = {.val = 3, .left = NULL, .right = NULL};
    struct TreeNode node2 = {.val = 4, .left = NULL, .right = NULL};
    struct TreeNode node3 = {.val = 4, .left = NULL, .right = NULL};
    struct TreeNode node4 = {.val = 3, .left = NULL, .right = NULL};
    struct TreeNode node5 = {.val = 2, .left = &node1, .right = &node2};
    struct TreeNode node6 = {.val = 2, .left = &node3, .right = &node4};
    struct TreeNode node7 = {.val = 3, .left = &node5, .right = &node6};
    bool res = isSymmetric(&node7);
    if (res) {
        printf("二叉树镜像树\n");
    } else {
        printf("非二叉镜像树\n");
    }
    return 0;
}
