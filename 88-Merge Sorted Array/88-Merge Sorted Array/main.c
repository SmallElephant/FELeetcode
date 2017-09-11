//
//  main.c
//  88-Merge Sorted Array
//
//  Created by FlyElephant on 2017/9/11.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int m, int* nums2, int n) {
    int *res = malloc(sizeof(int) * (m + n));
    int i = 0;
    int j = 0;
    for (int k = 0; k < m + n; k++) {
        if (i >= m) {
            *(res + k) = *(nums2 + j);
            j++;
        } else if (j >= n) {
            *(res + k) = *(nums1 + i);
            i++;
        } else {
            int a = *(nums1 + i);
            int b = *(nums2 + j);
            if (a < b) {
                *(res + k) = a;
                i++;
            } else {
                *(res + k) = b;
                j++;
            }
        }
    }
    for (int k = 0; k < m + n; k++) {
        nums1[k] = res[k];
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int num1[10] = {1, 2, 5, 7, 9};
    int num2[5] = {2, 4, 6, 8, 10};
    merge(num1, 5, num2, 5);
    for (int i = 0; i < 10; i++) {
        printf("当前的值:%d\n",*(num1 + i));
    }
    return 0;
}
