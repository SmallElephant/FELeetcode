//
//  main.c
//  83-deleteDuplicates
//
//  Created by FlyElephant on 2017/9/11.
//  Copyright © 2017年 FlyElephant. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *node = NULL;
    struct ListNode **tail = &node;
    while (head != NULL) {
        *tail = head;
        while (head != NULL && head->next != NULL && head->val == (head->next)->val) {
            head = head->next;
        }
        head = head->next;
        tail = &((*tail)->next);
        if (head == NULL) {
            *tail = NULL;
        }
    }
    return node;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    struct ListNode node1 = { .val = 3, .next = NULL};
    struct ListNode node2 = { .val = 2, .next = &node1};
    struct ListNode node3 = { .val = 2, .next = &node2};
    struct ListNode node4 = { .val = 1, .next = &node3};
    struct ListNode node5 = { .val = 1, .next = &node4};
    struct ListNode *head = deleteDuplicates(&node5);
    while (head != NULL) {
        printf("当前的head的值:%d\n",head->val);
        head = head->next;
    }
//    struct ListNode node4 = { .val = 1, .next = NULL};
//    struct ListNode node5 = { .val = 1, .next = &node4};
//    struct ListNode *head = deleteDuplicates(&node5);
//    while (head != NULL) {
//        printf("当前的head的值:%d\n",head->val);
//        head = head->next;
//    }
    return 0;
}
