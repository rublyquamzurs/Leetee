//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static bool isPalindrome(int x) {
    bool ans = true;
    if (x < 0)return false;
    int num = log10(x);
    int mark = 0, kram = 0;
    for (int i = 0; i < num; i+=2)
    {
        mark = x / pow(10, num - i);
        kram = x % 10;
        if (mark == kram)ans = true;
        else
        {
            ans = false;
            break;
        }
        x = x - pow(10, num - i) * mark;
        x = (x - kram) / 10;
    }
    return ans;
}

void RunIsPalindrome() {
    int n = 134767431;
    cout << (isPalindrome(n) ? "true" : "false") << endl;
}