//
//  main.c
//  104-maxDepth
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

int maxDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int leftDepth = maxDepth(root->left) + 1;
    int rightDepth = maxDepth(root->right) + 1;
    return leftDepth > rightDepth ? leftDepth : rightDepth;
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
    int depth = maxDepth(&node7);
    printf("二叉树的深度:%d\n",depth);
    return 0;
}
