//
//  main.c
//  111-minDepth
//
//  Created by FlyElephant on 2017/9/12.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int minDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL) {
        return minDepth(root->right) + 1;
    }
    if (root->right == NULL) {
        return minDepth(root->left) + 1;
    }
    int leftDepth = minDepth(root->left) + 1;
    int rightDepth = minDepth(root->right) + 1;
    return leftDepth < rightDepth ? leftDepth : rightDepth;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    struct TreeNode node3 = {.val = 4, .left = NULL, .right = NULL};
    struct TreeNode node4 = {.val = 5, .left = NULL, .right = NULL};
    struct TreeNode node6 = {.val = 2, .left = &node3, .right = &node4};
    struct TreeNode node8 = {.val = 3, .left = NULL, .right = NULL};
    struct TreeNode node7 = {.val = 1, .left = &node6, .right = &node8};
    int depth = minDepth(&node7);
    printf("树的高度:%d\n",depth);
    return 0;
}
