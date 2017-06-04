//
//  main.swift
//  4-MedianOfSortArray
//
//  Created by keso on 2017/6/4.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

import Foundation

var solution:Solution = Solution()

var num1 = [1, 2, 5, 6]

var num2 = [3, 4]
var result = solution.findMedianSortedArrays(num1, num2)
print("中位数:\(result)")


var result2 = solution.findMedianSortedArrays2(num1, num2)
print("中位数:\(result2)")

var result3 = solution.findMedianSortedArrays3(num1, num2)
print("中位数:\(result2)")
