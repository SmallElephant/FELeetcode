//
//  main.c
//  66-plusOne
//
//  Created by keso on 2017/9/10.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1;
    for (int i = digitsSize - 1; i >= 0; i--) {
        int val = *(digits + i) + carry;
        *(digits + i) = val % 10;
        carry = val / 10;
    }
    if (carry == 1) {
        int *tmp = malloc(sizeof(int)*(digitsSize + 1));
        *(tmp + 0) = carry;
        for (int i = 0; i <= digitsSize; i++) {
            *(tmp + i + 1) = *(digits + i);
        }
        *returnSize = digitsSize + 1;
        return tmp;
    } else {
        *returnSize = digitsSize;
        return digits;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int digits[3] = {9, 9, 9};
    int returnSize = 3;
    int *res = plusOne(digits, 3, &returnSize);
    
    for (int i = 0; i < returnSize; i++) {
        printf("顺序结果:%d\n",*(res + i));
    }
    
    return 0;
}
