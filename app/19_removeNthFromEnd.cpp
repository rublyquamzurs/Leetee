#include "CSolution.h"


static ListNode* removeNthFromEnd(ListNode* head, int n) {
    if (!head)
    {
        return NULL;
    }

    ListNode *save[30] = { NULL };
    ListNode *cur = head;
    ListNode* remove_addr, * prev_addr;
    int remove_idx, prev_idx;
    int cnt = 0;

    while (cur)
    {
        save[cnt] = cur;
        cur = cur->next;
        cnt++;
    }
    remove_idx = cnt - n;

    if (remove_idx == 0)
    {
        return head->next;
    }

    remove_addr = save[remove_idx];

    prev_idx = remove_idx - 1;
    prev_addr = save[prev_idx];

    prev_addr->next = remove_addr->next;
    remove_addr->next = NULL;

    return head;
}

void RunRemoveNthFromEnd() {
    ListNode x5(5);
    ListNode x4(4, &x5);
    ListNode x3(3, &x4);
    ListNode x2(2, &x3);
    ListNode x1(1, &x2);
    int n = 2;
    ListNode * ans = removeNthFromEnd(&x1, n);
    while (ans != nullptr) {
        printf("%d ", ans->val);
        ans = ans->next;
    }
    printf("\n");
}