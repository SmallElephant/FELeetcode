//
//  main.c
//  67-addBinary
//
//  Created by keso on 2017/9/10.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char* addBinary(char* a, char* b) {
    int m = (int)strlen(a);
    int n = (int)strlen(b);
    int len = m > n ? m : n;
    int max = len;
    char *res = malloc(sizeof(char) * (len + 1));
    *(res + len) = '\0';
    m--;
    n--;
    len--;
    int carrry = 0;
    while (m >= 0 || n >= 0) {
        int p = m >= 0 ? *(a + m--) - '0' : 0;
        int q = n >= 0 ? *(b + n--) - '0' : 0;
        int sum = p + q + carrry;
        *(res + len--) = sum % 2 + '0';
        carrry = sum / 2;
    }
    if (carrry == 1) {
      char *str = malloc(sizeof(char) * (max + 2));
      strcpy (str, "1");
      strcat (str, res);
      return str;
    } else {
      return res;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    char *a = "11";
    char *b = "1";
    char *res = addBinary(a, b);
    printf("二进制的相加结果:%s\n",res);
    return 0;
}
