//
//  main.c
//  110-isBalanced
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

int depth(struct TreeNode *root) {
    if (root == NULL) {
        return 0;
    }
    int leftDepth = depth(root->left) + 1;
    int rightDepth = depth(root->right) + 1;
    return leftDepth > rightDepth ? leftDepth : rightDepth;
}

bool isBalanced(struct TreeNode* root) {
    if (root == NULL) {
        return true;
    }
    int left = depth(root->left);
    int right = depth(root->right);
    if (left - right > 1 || right - left > 1) {
        return false;
    } else {
        return isBalanced(root->left) && isBalanced(root->right);
    }
}

//int depth(struct TreeNode *root) {
//    if (root == NULL) {
//        return 0;
//    }
//    int leftDepth = depth(root->left);
//    if (leftDepth == -1) {
//        return -1;
//    }
//    int rightDepth = depth(root->right);
//    if (rightDepth == -1) {
//        return -1;
//    }
//    if (leftDepth - rightDepth > 1 || rightDepth - leftDepth > 1) {
//        return -1;
//    }
//    return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
//}
//
//bool isBalanced(struct TreeNode* root) {
//    return depth(root) != -1;
//}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
//    struct TreeNode node1 = {.val = 1, .left = NULL, .right = NULL};
//    struct TreeNode node2 = {.val = 2, .left = NULL, .right = NULL};
//    struct TreeNode node3 = {.val = 4, .left = NULL, .right = NULL};
//    struct TreeNode node4 = {.val = 7, .left = NULL, .right = NULL};
//    struct TreeNode node5 = {.val = 8, .left = &node1, .right = &node2};
//    struct TreeNode node6 = {.val = 3, .left = &node3, .right = &node4};
//    struct TreeNode node7 = {.val = 5, .left = &node5, .right = &node6};
//    bool res = isBalanced(&node7);
//    if (res) {
//        printf("二叉平衡树\n");
//    } else {
//        printf("非二叉平衡树\n");
//    }
    
    struct TreeNode node1 = {.val = 1, .left = NULL, .right = NULL};
    struct TreeNode node2 = {.val = 2, .left = NULL, .right = NULL};
    struct TreeNode node5 = {.val = 8, .left = &node1, .right = &node2};
    struct TreeNode node7 = {.val = 5, .left = &node5, .right = NULL};
    bool res = isBalanced(&node7);
    if (res) {
        printf("二叉平衡树\n");
    } else {
        printf("非二叉平衡树\n");
    }
    return 0;
}
