//
//  main.c
//  136-singleNumber
//
//  Created by keso on 2017/9/17.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int res = 0;
    for (int i = 0; i < numsSize; i++) {
        res = res ^ nums[i];
    }
    return res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int nums[5] = {0, 0, 3, 4, 3};
    int res = singleNumber(nums, 5);
    printf("single 数字:%d\n",res);
    return 0;
}
