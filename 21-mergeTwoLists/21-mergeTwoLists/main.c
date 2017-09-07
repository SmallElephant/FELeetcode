//
//  main.c
//  21-mergeTwoLists
//
//  Created by FlyElephant on 2017/9/7.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *node = NULL;
    struct ListNode **tail = &node;
    while (l1  && l2 ) {
        if (l1->val < l2->val) {
            *tail = l1;
            l1 = l1->next;
        } else {
            *tail = l2;
            l2 = l2->next;
        }
        tail = &((*tail)->next);
    }
    *tail = l1 ? l1 : l2;
    return node;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    struct ListNode node1 = { .val = 2, .next = NULL};
    struct ListNode node2 = { 1, &node1};
    struct ListNode l1 = node2;
    
    struct ListNode node3 = { .val = 5, .next = NULL};
    struct ListNode node4 = { .val = 4, .next = &node3};
    struct ListNode node5 = { .val = 3, .next = &node4};
    struct ListNode l2 = node5;
    struct ListNode *result = mergeTwoLists(&l1, &l2);
    while (result != NULL) {
        printf("结果:%d\n",result->val);
        result = result->next;
    }

    return 0;
}
