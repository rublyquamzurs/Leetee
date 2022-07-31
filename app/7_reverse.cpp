//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static int reverse(int x) {
    int ans = 0;
    while (x != 0)
    {
        int pop = x % 10;
        x /= 10;
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && pop > 7)) return 0;
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && pop < -8)) return 0;
        ans = ans * 10 + pop;
    }
    return ans;
}


void RunReverse() {
    int n = 120;
    cout << reverse(n) << endl;
}