//
//  main.c
//  122-maxProfit
//
//  Created by keso on 2017/9/16.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    for (int i = 1; i < pricesSize; i++) {
        int cur = *(prices + i);
        int pre = *(prices + i - 1);
        profit += cur > pre ? cur - pre : 0;
    }
    return profit;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int data[9] = {2, 1, 3, 4, 5, 4, 2, 8, 7};
    int res = maxProfit(data, 9);
    printf("最大利润:%d\n",res);
    return 0;
}
