//
//  main.c
//  100-isSameTree
//
//  Created by FlyElephant on 2017/9/11.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode {
   int val;
   struct TreeNode *left;
   struct TreeNode *right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL) {
        return true;
    } else if (p == NULL || q == NULL) {
        return false;
    } else {
        if (p->val != q->val) {
            return false;
        }
        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);
        return left && right;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    struct TreeNode node1 = {.val = 2, .left = NULL, .right = NULL};
    struct TreeNode node2 = {.val = 3, .left = NULL, .right = NULL};
    struct TreeNode p = {.val = 1, .left = &node1, .right = &node2};
    
    struct TreeNode node3 = {.val = 1, .left = NULL, .right = NULL};
    struct TreeNode node4 = {.val = 3, .left = NULL, .right = NULL};
    struct TreeNode q = {.val = 1, .left = &node3, .right = &node4};
    
    bool issame = isSameTree(&p, &q);
    if (issame) {
        printf("是相同子树\n");
    } else {
        printf("不是相同的子树\n");
    }
    return 0;
}
