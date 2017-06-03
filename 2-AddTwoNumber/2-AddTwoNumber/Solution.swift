//
//  Solution.swift
//  2-AddTwoNumber
//
//  Created by keso on 2017/6/3.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

import Foundation

public class ListNode {
     public var val: Int
     public var next: ListNode?
     public init(_ val: Int) {
       self.val = val
       self.next = nil
     }
}

class Solution {
    
    func addTwoNumbers(_ l1: ListNode?, _ l2: ListNode?) -> ListNode? {
        
        if l1 == nil {
            return l2
        }
        
        if l2 == nil {
            return l1
        }
        
        var headNode:ListNode?
        
        var head1:ListNode? = l1
        var head2:ListNode? = l2
        var carry:Int = 0
        
        while head1 != nil {
            
            let value:Int = (head1?.val)! + (head2?.val)! + carry
            
            let listNode:ListNode? = ListNode(value % 10)
            
            if headNode == nil {
                headNode = listNode
            } else {
                var nextNode:ListNode? = headNode
                while nextNode?.next != nil {
                    nextNode = nextNode?.next
                }
                nextNode?.next = listNode
            }
            carry = value / 10
            head1 = head1?.next
            head2 = head2?.next
        }
        
        return headNode
    }
    
    func addTwoNumbers2(_ l1: ListNode?, _ l2: ListNode?) -> ListNode? {
        
        let headNode = ListNode(0)
        var listNode = headNode
        
        var head1:ListNode? = l1
        var head2:ListNode? = l2
        var carry:Int = 0
        
        while head1 != nil || head2 != nil || carry != 0 {
            
            var sum:Int = carry
            
            if head1 != nil {
                sum += (head1?.val)!
                head1 = head1?.next
            }
            
            if head2 != nil {
                sum += (head2?.val)!
                head2 = head2?.next
            }
            
            carry = sum / 10
            
            listNode.next = ListNode(sum % 10)
            listNode = listNode.next!
        }
        
        return headNode.next
    }
    
}
