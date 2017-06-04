//
//  Solution.swift
//  4-MedianOfSortArray
//
//  Created by keso on 2017/6/4.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

import Foundation

class Solution {
    
    func findMedianSortedArrays(_ nums1: [Int], _ nums2: [Int]) -> Double {
        
        var num3 = [Int]()
        
        var index1:Int = 0
        var index2:Int = 0
        
        while index1 < nums1.count && index2 < nums2.count {
            
            if nums1[index1] < nums2[index2] {
                num3.append(nums1[index1])
                index1 += 1
            } else {
                num3.append(nums2[index2])
                index2 += 1
            }
        }
        
        while index1 < nums1.count {
            num3.append(nums1[index1])
            index1 += 1
        }
        
        while index2 < nums2.count {
            num3.append(nums2[index2])
            index2 += 1
        }
        
        var mid:Double = 0
        
        if num3.count > 0 {
            let count = num3.count
            if count % 2 == 0 {
                mid = Double(num3[count / 2] + num3[count / 2 - 1]) / 2
            } else {
                mid = Double(num3[count / 2])
            }
        }
        
        print("\(num3)")
        
        return mid
    }
    
    
    func findMedianSortedArrays2(_ nums1: [Int], _ nums2: [Int]) -> Double {
        
        var index1:Int = 0
        var index2:Int = 0
        
        var preNum = 0
        var currentNum = 0
        
        var count:Int = 0
        
        let count1 = nums1.count
        let count2 = nums2.count
        
        let midIndex = (count1 + count2) / 2
        
        while index1 < count1 && index2 < count2 {
            
            if count - 1 == midIndex {
                break
            }
            
            preNum = currentNum
        
            if nums1[index1] < nums2[index2] {
                currentNum = nums1[index1]
                index1 += 1
            } else {
                currentNum = nums2[index2]
                index2 += 1
            }
            
            count += 1
        }
        
        while index1 < count1 {

            if count - 1 == midIndex {
                break
            }
            preNum = currentNum
            currentNum = nums1[index1]
            index1 += 1
            count += 1
        }
        
        while index2 < count2 {
            if count - 1 == midIndex {
                break
            }
            preNum = currentNum
            currentNum = nums2[index2]
            index2 += 1
            count += 1
        }
        
        var result:Double = 0
        
        if (count1 + count2) % 2 == 0 {
            result = Double(preNum + currentNum) / 2.0
        } else {
            result = Double(currentNum)
        }

        return result
    }
    
    func findMedianSortedArrays3(_ nums1: [Int], _ nums2: [Int]) -> Double {
        
        let count = nums1.count + nums2.count
        
        if count % 2 == 1 {
            return findKth(num1: num1, m: num1.count, num2: num2, n: num2.count, k: count / 2 + 1)
        } else {
            let mid1:Double = findKth(num1: num1, m: num1.count, num2: num2, n: num2.count, k: count / 2 + 1)
            let mid2:Double = findKth(num1: num1, m: num1.count, num2: num2, n: num2.count, k: count / 2)
            return (mid1 + mid2) / 2
        }
    }
    
    func findKth(num1:[Int], m:Int, num2:[Int], n:Int, k:Int) -> Double {
        
        // 假定第一个数组为较小数组
        if m > n {
            return findKth(num1: num2, m: n, num2: num1, n: m, k: k)
        }
        
        if m == 0 {
            return Double(num2[k - 1])
        }
        
        if  k == 1 {
            return Double(min(num1[0], num2[0]))
        }
        
        let lenA = min(k / 2, m)
        let lenB = k - lenA
        
        if num1[lenA - 1] < num2[lenB - 1] {
          let temp:[Int] = num1
          return findKth(num1: Array(temp.suffix(from: lenA)), m: m - lenA, num2: num2, n: n, k: k - lenA)
        } else if num1[lenA - 1] > num2[lenB - 1] {
            let temp:[Int] = num2
           return findKth(num1: num1, m: m, num2:Array(temp.suffix(from: lenB)) , n: n - lenB, k: k - lenB)
        } else {
           return Double(num2[lenA - 1])
        }
    }
}
