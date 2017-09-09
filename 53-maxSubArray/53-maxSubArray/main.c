//
//  main.c
//  53-maxSubArray
//
//  Created by keso on 2017/9/8.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

int maxSubArray(int* nums, int numsSize) {
    int max_so_far = *nums;// 最大值
    int max_ending_here = *nums;// 当前子序列的和
    for (int i = 1; i < numsSize; i++) {
        int val = *(nums + i);
        max_ending_here = val > max_ending_here + val ? val : max_ending_here + val;
        max_so_far = max_ending_here > max_so_far ? max_ending_here : max_so_far;
    }
    return max_so_far;
}

int maxSubArray2(int* nums, int numsSize) {
    int maxSum = 0;// 最大值
    for (int i = 0; i < numsSize; i++) {
        int curSum = 0;
        for (int j = i; j < numsSize; j++) {
            curSum += *(nums + j);
            if (curSum > maxSum) {
                maxSum = curSum;
            }
        }
    }
    return maxSum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
//    int nums[9] = {-2,1,-3,4,-1,2,1,-5,4};
//    int res = maxSubArray(nums, 1);
    
//    int nums[1] = {-1};
//    int res = maxSubArray(nums, 1);
    
    int nums[2] = {-2, 1};
    int res = maxSubArray(nums, 2);
    printf("结果:%d\n",res);
    return 0;
}
