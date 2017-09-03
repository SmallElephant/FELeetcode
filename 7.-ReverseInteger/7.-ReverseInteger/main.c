//
//  main.c
//  7.-ReverseInteger
//
//  Created by keso on 2017/9/2.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int reverse(int x) {
    int result = 0;
    while (x != 0) {
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (x % 10 > INT_MAX % 10))) {
            return 0;
        }
        if ((result < INT_MIN / 10) || ((result == INT_MIN / 10) &&  (x % 10 < INT_MIN % 10))) {
            return 0;
        }

        result = result * 10 + x % 10;
        x = x / 10;
    }
    return result;
}

//https://leetcode.com/problems/reverse-integer/description/

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int mod = -12 / 10;
    printf("余数结果:%d\n", mod);
    // 1534236469  0
    // 900000 9
    // -2147483412 -2143847412
    int result = reverse(-2143847412);
    printf("反转之后的数字:%d\n",result);
    return 0;
}
