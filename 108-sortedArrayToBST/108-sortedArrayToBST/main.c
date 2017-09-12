//
//  main.c
//  108-sortedArrayToBST
//
//  Created by FlyElephant on 2017/9/12.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* arrayToBST(int* nums, int start, int end) {
    if (start > end) {
        return NULL;
    }
    int mid = (start + end) / 2;
    struct TreeNode *root  = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = *(nums + mid);
    root->left = arrayToBST(nums, start, mid - 1);
    root->right = arrayToBST(nums, mid + 1, end);
    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return arrayToBST(nums, 0, numsSize - 1);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int nums[7] = {1, 2, 3, 4, 5, 6, 7};
    struct TreeNode *node = sortedArrayToBST(nums, 7);
    printf("TreeNode节点的值:%d\n",node->left->val);
    return 0;
}
