//
//  main.c
//  118-generate
//
//  Created by keso on 2017/9/12.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int** generate(int numRows, int** columnSizes) {
    if (!columnSizes) {
        return 0;
    }
    if (numRows == 0) {
        return 0;
    }
    int **res = (int **)malloc(sizeof(int *) * numRows);
    int *columns = (int *)malloc(sizeof(int) * numRows);
    for (int i = 0; i < numRows; i++) {
        res[i] = (int *)malloc(sizeof(int) * numRows);
        columns[i] = i + 1;
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                res[i][j] = 1;
            } else {
                res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
            }
        }
    }
    *columnSizes = columns;
    return res;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int **columnSizes = (int **)malloc(sizeof(int) * 1);
    int **nums = generate(6, columnSizes);
    for (int i = 0; i < 6; i++) {
        printf("第%d行",(i + 1));
        for (int j = 0; j <= i; j++) {
            printf("    %d",nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}
