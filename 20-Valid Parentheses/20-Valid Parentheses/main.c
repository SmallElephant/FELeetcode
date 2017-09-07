//
//  main.c
//  20-Valid Parentheses
//
//  Created by FlyElephant on 2017/9/7.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <strings.h>

bool isValid(char* s) {
    long len = strlen(s);
    if (len % 2 != 0) {
        return false;
    }
    int limit = (int)len / 2;
    char *stack = malloc(limit+1);
    int index = - 1;
    while (*s != '\0') {
        if (*s == '(' || *s == '[' || *s == '{') {
            if (limit == index) {
                return false;
            } else {
                stack[++index] = *s;
            }
        } else {
            if (index == -1) {
                return false;
            }
            char top = stack[index];
            if (top == '(' && *s != ')') {
                return false;
            }
            if (top == '[' && *s != ']') {
                return false;
            }
            if (top == '{' && *s != '}') {
                return false;
            }
            index--;
        }
        s++;
    }
    return index == -1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    char *s = ")";
    bool result = isValid(s);
    if (result) {
        printf("括号格式正确\n");
    } else {
        printf("括号格式不正确\n");
    }
    return 0;
}
