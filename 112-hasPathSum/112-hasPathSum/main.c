//
//  main.c
//  112-hasPathSum
//
//  Created by FlyElephant on 2017/9/12.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool hasPathSum(struct TreeNode* root, int sum) {
    if (root == NULL) {
        return false;
    }
    sum -= root->val;
    if (root->left == NULL && root->right == NULL) {
        return sum == 0 ? true : false;
    }
    if (root->left && hasPathSum(root->left, sum)) {
        return true;
    }
    if (root->right && hasPathSum(root->right, sum)) {
        return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    struct TreeNode node11 = {.val = 7, .left = NULL, .right = NULL};
    struct TreeNode node12 = {.val = 2, .left = NULL, .right = NULL};
    struct TreeNode node1 = {.val = 11, .left = &node11, .right = &node12};
    struct TreeNode node3 = {.val = 13, .left = NULL, .right = NULL};
    struct TreeNode node41 = {.val = 1, .left = NULL, .right = NULL};
    struct TreeNode node4 = {.val = 4, .left = NULL, .right = &node41};
    struct TreeNode node5 = {.val = 4, .left = &node1, .right = NULL};
    struct TreeNode node6 = {.val = 8, .left = &node3, .right = &node4};
    struct TreeNode node7 = {.val = 5, .left = &node5, .right = &node6};
    bool isHas = hasPathSum(&node7, 22);
    if (isHas) {
        printf("有路径\n");
    } else {
        printf("无路径\n");
    }
    return 0;
}
