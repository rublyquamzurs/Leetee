//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"


static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* ans = new ListNode(0);
    ListNode* l1current = l1;
    ListNode* l2current = l2;
    ListNode* current = ans;
    ListNode* end(nullptr);
    bool forward;
    while (l1current != nullptr || l2current != nullptr)
    {
        int currentl1val = l1current == nullptr ? 0 : l1current->val;
        int currentl2val = l2current == nullptr ? 0 : l2current->val;
        int currentval = currentl1val + currentl2val;
        current->val += currentval;
        forward = current->val > 9;
        current->val = forward ? current->val - 10 : current->val;
        current->next = forward ? new ListNode(1) : new ListNode(0);
        end = current;
        current = current->next;
        l1current = l1current == nullptr ? l1current : l1current->next;
        l2current = l2current == nullptr ? l2current : l2current->next;
    }
    if (!forward) end->next = current->next;
    return ans;
}

void RunAddTwoNumbers() {
    ListNode l6(9);
    ListNode l5(9, &l6);
    ListNode l4(9, &l5);
    ListNode l3(9, &l4);
    ListNode l2(9, &l3);
    ListNode l1(9, &l2);
    ListNode l0(9, &l1);
    ListNode r3(9);
    ListNode r2(9, &r3);
    ListNode r1(9, &r2);
    ListNode r0(9, &r1);

    ListNode * ans = addTwoNumbers(&l0, &r0);
    int count = 0;
    while (ans) {
        printf(&", %d" [ 2 * !count++], ans->val);
        ans = ans->next;
    }
    printf("\n");
}