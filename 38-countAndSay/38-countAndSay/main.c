//
//  main.c
//  38-countAndSay
//
//  Created by FlyElephant on 2017/9/8.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char* countAndSay(int n) {
    char *pre = "1";
    for (int i = 2; i <= n; i++) {
        char *tmp =  (char *)malloc(1 + strlen(pre));;
        // 上一个字符串
        for (int j = 0; j < strlen(pre); j++) {
            char cur = *(pre + j);
            char next = *(pre + j + 1);
            if (next != '\0') {
                if (cur != next) {
                    strcat(tmp, "1");
                    strcat(tmp, &cur);
                } else {
                    strcat(tmp, "2");
                    strcat(tmp, &cur);
                    j++;
                }
            } else {
                strcat(tmp, "1");
                strcat(tmp, &cur);
            }
        }
        pre = tmp;
    }
    return pre;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    char *res = countAndSay(4);
    printf("最后的结果:%s\n",res);
    
    char strDest[6];
    char * strA = "abc";
    strcpy(strDest, strA);
    strncat(strDest, "123", 2);
    printf("%s \n", strDest); // 打印出：abc12
    
    char *test = "";
    char num = '2';
    
    return 0;
}
