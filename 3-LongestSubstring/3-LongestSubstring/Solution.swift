//
//  Solution.swift
//  3-LongestSubstring
//
//  Created by keso on 2017/6/3.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

import Foundation

class Solution {
    
    func lengthOfLongestSubstring2(_ s: String) -> Int {
        
        var dict = [Character : Int]()
        var result:String = ""
        var data = [String]()
        var startIndex:Int = 0
        
        var chars = [Character](s.characters)
        
        for i in 0..<chars.count {
            
            let current = chars[i]

            if dict[current] != nil {
                data.append(result)
                
                while chars[startIndex] != current {
                    dict.removeValue(forKey: chars[startIndex])
                    startIndex += 1
                }
                
                startIndex += 1
                result = ""
            }
            result.append(current)
            dict[current] = 1
        }
        

        
        var longestString:String = result
        
        for i in 0..<data.count {
            
            if data[i].characters.count > longestString.characters.count {
                longestString = data[i]
            }
        }
        
        return longestString.characters.count
    }
    
    func lengthOfLongestSubstring(_ s: String) -> Int {
        
        guard s.characters.count != 0 else {
            return 0
        }
        
        var set = Set<Character>()
        
        var chars = [Character](s.characters)
        var maxlen = 0
        var startIndex = 0
        
        for i in 0..<chars.count {
            
            let current = chars[i]
            
            if set.contains(current) {
                
                maxlen = max(maxlen, i - startIndex)
                
                while chars[startIndex] != current {
                    set.remove(chars[startIndex])
                    startIndex += 1
                }
                
                startIndex += 1
                
            } else {
                set.insert(current)
            }
            
        }
        
        maxlen = max(maxlen, chars.count - startIndex)
        
        return maxlen
    }
    
    
    
    
}
