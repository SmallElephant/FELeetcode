//
//  main.c
//  118-generate
//
//  Created by keso on 2017/9/12.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize) {
    if (rowIndex < 0) {
        return NULL;
    }
    int *res = (int *)malloc(sizeof(int) * (rowIndex + 1));
    for (int i = 0; i <= rowIndex; i++) {
        for (int j = i; j >= 0; j--) {
            if (j == 0 || j == i) {
                res[j] = 1;
            } else {
                res[j] = res[j - 1] + res[j];
            }
        }
    }
    *returnSize = rowIndex + 1;
    return res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int row = 4;
    int *size = malloc(sizeof(int) * row);
    int *res = getRow(row - 1, size);
    for (int i = 0; i < row; i++) {
        printf("%d ",res[i]);
    }
    printf("\n");
    return 0;
}
