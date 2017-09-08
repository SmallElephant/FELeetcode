//
//  main.c
//  35-searchInsert
//
//  Created by FlyElephant on 2017/9/8.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int index = 0;
    for (int i = 0; i < numsSize; i++) {
        int value = *(nums + i);
        if (target <= value) {
            index = i;
            break;
        }
        if (i == numsSize - 1 && target > value) {
            index = numsSize;
        }
    }
    return index;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int nums[] = {1, 3, 5, 6};
    int index = searchInsert(nums, 4, 7);
    printf("最合适的位置:%d\n",index);
    return 0;
}
