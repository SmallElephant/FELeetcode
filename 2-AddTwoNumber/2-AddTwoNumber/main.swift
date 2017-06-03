//
//  main.swift
//  2-AddTwoNumber
//
//  Created by keso on 2017/6/3.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

import Foundation


var listNode1:ListNode = ListNode(2)
var listNode2:ListNode = ListNode(4)
var listNode3:ListNode = ListNode(3)

listNode1.next = listNode2
listNode2.next = listNode3

var nextNode1:ListNode = ListNode(5)
var nextNode2:ListNode = ListNode(6)
var nextNode3:ListNode = ListNode(4)

nextNode1.next = nextNode2
nextNode2.next = nextNode3

var solution:Solution = Solution()

var headNode:ListNode? = solution.addTwoNumbers2(listNode1, nextNode1)

while headNode != nil {
    print("节点的值:\(String(describing: headNode?.val))")
    headNode = headNode?.next
}
