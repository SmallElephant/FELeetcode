//
//  main.c
//  70-climbStairs
//
//  Created by FlyElephant on 2017/9/11.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>

int climbStairs(int n) {
    int pre = 0;
    int cur = 0;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            pre = 1;
            cur = 1;
        } else {
            int res = pre + cur;
            pre = cur;
            cur = res;
        }
    }
    return cur;
}

int climbStairs2(int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    return climbStairs2(n - 1) + climbStairs2(n - 2);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int steps = climbStairs(10);
    int steps2 = climbStairs2(10);
    printf("步行的楼梯步数:%d---%d\n",steps,steps2);
    return 0;
}
