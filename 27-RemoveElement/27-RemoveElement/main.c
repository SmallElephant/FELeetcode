//
//  main.c
//  27-RemoveElement
//
//  Created by FlyElephant on 2017/9/8.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int j = 0;
    for (int i = 0;i < numsSize; i++) {
        if ( *(nums + i) != val) {
            *(nums + j) = *(nums + i);
            j++;
        }
    }
    return j;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int nums[] = {3, 2, 2, 3};
    int len = removeElement(nums, 4, 3);
    printf("删除后的长度:%d\n",len);
    return 0;
}
