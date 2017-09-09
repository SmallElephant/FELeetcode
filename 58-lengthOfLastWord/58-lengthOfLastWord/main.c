//
//  main.c
//  58-lengthOfLastWord
//
//  Created by keso on 2017/9/9.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <strings.h>

int lengthOfLastWord(char* s) {
    int res = 0;
    int last_res = 0;
    while (*s != '\0') {
        if (*s != ' ') {
            res++;
        } else if (res) {
            last_res = res;
            res = 0;
        }
        s++;
    }
    return res ? res : last_res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    // 1. ""
    // 2. "a"
    // 3. "a "
    // 4. " "
    char *str = " abc   ";
    int len = lengthOfLastWord(str);
    printf("长度:%d\n",len);
    return 0;
}
