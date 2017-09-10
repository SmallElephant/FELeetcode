//
//  main.c
//  69-mySqrt
//
//  Created by keso on 2017/9/10.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>

int mySqrt(int x) {
    if (x <= 1) {
        return x;
    }
    int start = 0, end = x;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (x / mid == mid) {
            return mid;
        } else if (x / mid < mid) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return end;
}

int mySqrt1(int x) {
    if (x == 0) {
        return 0;
    }
    double res = 1;
    double last = 0;
    while (res != last) {
        last = res;
        res = (res + x / res) / 2;
    }
    return (int)res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int res = mySqrt1(101);
    printf("开平方根的结果:%d\n",res);
    return 0;
}
