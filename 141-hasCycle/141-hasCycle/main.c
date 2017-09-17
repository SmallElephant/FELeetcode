//
//  main.c
//  141-hasCycle
//
//  Created by keso on 2017/9/17.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    }
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    struct ListNode node1 = { .val = 5, .next = NULL};
    struct ListNode node2 = { .val = 4, .next = &node1};
    struct ListNode node3 = { .val = 3, .next = &node2};
    struct ListNode node4 = { .val = 2, .next = &node3};
    struct ListNode node5 = { .val = 1, .next = &node4};
    node1.next = &node5;
    bool res = hasCycle(&node5);
    if (res) {
        printf("链表存在环\n");
    } else {
        printf("链表不存在环\n");
    }
    return 0;
}
