//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static int myAtoi(string str) {
    int ans = 0;
    int pos = 1;
    std::string::iterator i = str.begin();
    while (i != str.end() && int(*i) == 32)
    {
        i++;
    }
    while (int(*i) == 43|| int(*i) == 45)
    {
        if (int(*i) == 43)
        {
            i++;
            break;
        }
        if (int(*i) == 45)
        {
            pos *= -1;
            i++;
            break;
        }
    }
    while (i != str.end() && (int(*i) >= 48 && int(*i) < 58))
    {
        int num = (int(*i) - 48) * pos;
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && num > 7)) return INT_MAX;
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && num < -8)) return INT_MIN;
        ans = ans * 10 + num;
        i++;
    }
    return ans;
}

void RunMyAtoi() {
    string s = "   -42";
    cout << myAtoi(s) << endl;
}