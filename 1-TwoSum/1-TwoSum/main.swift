//
//  main.swift
//  1-TwoSum
//
//  Created by keso on 2017/6/3.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

import Foundation

var solution:Solution = Solution()

var nums:[Int] = [3, 2, 4]
//var result:[Int] = solution.twoSum2([2, 7, 10, 12], 9)
var result:[Int] = solution.twoSum2([3, 2, 4], 6)

print("\(result)")

for (i, num) in nums.enumerated() {
    print("\(i)---\(num)")
}

