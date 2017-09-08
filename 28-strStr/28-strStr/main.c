//
//  main.c
//  28-strStr
//
//  Created by FlyElephant on 2017/9/8.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <strings.h>

// 1. "" "" 0
// 2. "a" "" 0
// 3. "" "a" -1
int strStr(char* haystack, char* needle) {
    int len1 = (int)strlen(haystack);
    int len2 = (int)strlen(needle);
    if (len2 == 0) {
        return 0;
    }
    int index = -1;
    for (int i = 0; i < len1; i++) {
        if (len1 - i < len2) {
            break;
        }
        for (int j = 0; j < len2; j++) {
            char tmp1 = *(haystack + j + i);
            char tmp2 = *(needle + j);
            if (tmp1 != tmp2) {
                break;
            }
            if (j == len2 - 1) {
                return i;
            }
        }
    }
    return index;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    char *str1 = "";
    char *str2 = "a";
    int index = strStr(str1, str2);
    printf("%s在%s的位置:%d\n",str2,str1,index);
    return 0;
}
