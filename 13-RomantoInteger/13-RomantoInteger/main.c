//
//  main.c
//  13-RomantoInteger
//
//  Created by keso on 2017/9/3.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int romanToInt(char* s) {
    int map[26];
    map['I'-'A'] = 1;
    map['V'-'A'] = 5;
    map['X'-'A'] = 10;
    map['L'-'A'] = 50;
    map['C'-'A'] = 100;
    map['D'-'A'] = 500;
    map['M'-'A'] = 1000;
    long len = strlen(s);
    int res = 0;
    for (int i = 0; i < len - 1; i++) {
        int cur = map[s[i]-'A'];
        int next = map[s[i+1]-'A'];
        if (cur >= next) {
            res += cur;
        } else {
            res -= cur;
        }
    }
    return res + map[s[len-1]-'A'];
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    char *str = "CXCIX";
    int res = romanToInt(str);
    printf("%s罗马数字:%d\n",str,res);
    return 0;
}
