//
//  main.c
//  121-maxProfit
//
//  Created by keso on 2017/9/16.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    int minPrice = *(prices + 0);
    for (int i = 0; i < pricesSize; i++) {
        int val = *(prices + i);
        if (val <= minPrice) {
            minPrice = val;
        } else {
            int diff = val - minPrice;
            profit = profit > diff ? profit : diff;
        }
    }
    return profit;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int res = maxProfit(prices, 6);
    printf("最大利润结果:%d\n", res);
    return 0;
}
