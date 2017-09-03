//
//  main.c
//  9-PalindromeNumber
//
//  Created by keso on 2017/9/3.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    int div = 1;
    while (x / div >= 10) {
        div *= 10;
    }
    while (x > 0) {
        int left = x / div;
        int right = x % 10;
        if (left != right) {
            return false;
        }
        x = (x % div) / 10;
        div /= 100;
    }
    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int num = 12321;
    bool isPalidrome = isPalindrome(num);
    if (isPalidrome) {
        printf("%d是回文字符串\n",num);
    } else {
        printf("%d不是回文字符串\n",num);
    }
    return 0;
}
