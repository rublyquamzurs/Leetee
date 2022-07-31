//
// Created by Sapphire on 2022/8/1.
//

#ifndef LEETEE_CSTRUCT_H
#define LEETEE_CSTRUCT_H


typedef struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    explicit ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
} ListNode;

#endif //LEETEE_CSTRUCT_H
