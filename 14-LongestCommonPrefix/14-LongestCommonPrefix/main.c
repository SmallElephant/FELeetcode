//
//  main.c
//  14-LongestCommonPrefix
//
//  Created by FlyElephant on 2017/9/4.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strs == NULL || *strs == NULL) {
        return "";
    }
    if (strsSize == 0) {
        return "";
    }
    char *first = strs[0];
    long len = strlen(first);
    int max = (int)len;
    for (int i = 0; i < max; i++) {
        for (int j = 1; j < strsSize; j++) {
            if (i >= strlen(strs[j]) || first[i] != strs[j][i]) {
                max = i;
                break;
            }
        }
    }
    char *res = (char *)malloc(max+1);
    for (int i = 0; i < max; i++) {
        res[i] = first[i];
    }
    res[max] = '\0';
    return res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    char *str[3] = {"abcd", "abc", "abfly"};
    char *res = longestCommonPrefix(str, 3);
    printf("最长的公共前缀:%s\n",res);
    
//    char *str[1] = {"a"};
//    char *res = longestCommonPrefix(str, 1);
    return 0;
}
