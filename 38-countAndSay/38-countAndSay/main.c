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
        int len = (int)strlen(pre)*2 + 1;
        char *tmp = (char*)malloc(len*sizeof(char));
        int m = 0;
        for (int j = 0; j < strlen(pre); j++) {
            char cur = *(pre + j);
            int k = j;
            while (cur == *(pre + k)) {
                k++;
            }
            tmp[m++] = (k - j) + '0';
            tmp[m++] = cur;
            j = k - 1;
        }
        tmp[m] = '\0';
        pre = tmp;
    }
    return pre;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    for (int i = 0; i <= 10; i++) {
        char *res = countAndSay(i);
        printf("%d的表达结果:%s---\n",i,res);
    }

    
//    char strDest[6];
//    char * strA = "abc";
//    strcpy(strDest, strA);
//    strncat(strDest, "123", 2);
//    printf("%s \n", strDest); // 打印出：abc12
//    
//    char *test = "";
//    char num = '2';
    
    return 0;
}
