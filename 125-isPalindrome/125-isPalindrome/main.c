//
//  main.c
//  125-isPalindrome
//
//  Created by keso on 2017/9/17.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char* s) {
    int left = 0;
    int len = (int)strlen(s);
    int right = len - 1;
    while (left < right) {
        while (left < len && !isalnum(*(s + left))) {
            left++;
        }
        while (right >= 0 && !isalnum(*(s + right))) {
            right--;
        }
        if (left >= right) {
            return true;
        }
        char l = tolower(*(s + left++));
        char r = tolower(*(s + right--));
        if (l != r) {
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    char *s = "A man, a plan, a canal: Panama";
    bool res = isPalindrome(s);
    if (res) {
        printf("是回文字符串\n");
    } else {
        printf("不是回文字符串\n");
    }
    return 0;
}
