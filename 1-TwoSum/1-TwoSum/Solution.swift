//
//  Solution.swift
//  1-TwoSum
//
//  Created by keso on 2017/6/3.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

import Foundation

//https://leetcode.com/problems/two-sum/#/description
class Solution {
    
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        
        let count:Int = nums.count
        
        for i in 0..<count - 1 {
            
            let num:Int = nums[i]
            
            for j in (i + 1)..<count {
                
                if num + nums[j] == target {
                    return [i, j]
                }
            }
        }
        
        return []
    }
    
    
    func twoSum2(_ nums: [Int], _ target: Int) -> [Int] {
        
        var dict = [Int : Int]()
        
        for (i, num) in nums.enumerated() {
            
            if let lastIndex = dict[target - num] {
                return [lastIndex, i]
            }
            
            dict[num] = i
        }
        
        return []
    }
}
