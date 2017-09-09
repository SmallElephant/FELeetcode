//
//  main.c
//  53-maxSubArray
//
//  Created by keso on 2017/9/8.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
    int maxSum = 0;// 最大值
    int thisSum = 0;// 当前子序列的和
    for (int i = 0; i < numsSize; i++) {
        thisSum += *(nums + i);
        if (thisSum < 0) {
            thisSum = 0;
        }
        if (thisSum > maxSum) {
            maxSum = thisSum;
        }
    }
    return maxSum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int nums[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int res = maxSubArray(nums, 9);
    printf("结果:%d\n",res);
    return 0;
}
