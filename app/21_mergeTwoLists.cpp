#include "CSolution.h"

using namespace std;

static ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (!l1)
        return l2;
    else if (!l2)
        return l1;

    ListNode* head, * cur;
    if (l1->val <= l2->val)
    {
        head = l1;
        l1 = l1->next;
    }
    else
    {
        head = l2;
        l2 = l2->next;
    }
    cur = head;
    while (l1 && l2)
    {
        if (l1->val <= l2->val)
        {
            cur->next = l1;
            l1 = l1->next;
        }
        else
        {
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    if (l1)
        cur->next = l1;
    else
        cur->next = l2;

    return head;
}

void RunMergeTwoLists() {
    ListNode l3(4);
    ListNode l2(2, &l3);
    ListNode l1(1, &l2);
    ListNode r3(4);
    ListNode r2(3, &r3);
    ListNode r1(1, &r2);

    ListNode* cur = mergeTwoLists(&l1, &r1);
    while (cur != nullptr)
    {
        std::cout << cur->val << " ";
        cur = cur->next;
    }
}