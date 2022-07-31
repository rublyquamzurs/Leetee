//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static int romanToInt(string s) {
    int ans = 0;
    for (std::string::iterator i = s.begin(); i < s.end(); i++) {
        if (*i == 'M')ans += 1000;
        if (*i == 'C') {
            if (i + 1 < s.end() && (*(i + 1) == 'M' || *(i + 1) == 'D'))ans -= 100;
            else ans += 100;
        }
        if (*i == 'X') {
            if (i + 1 < s.end() && (*(i + 1) == 'C' || *(i + 1) == 'L')) ans -= 10;
            else ans += 10;
        }
        if (*i == 'I') {
            if (i + 1 < s.end() && (*(i + 1) == 'X' || *(i + 1) == 'V')) ans -= 1;
            else ans += 1;
        }
        if (*i == 'D') ans += 500;
        if (*i == 'L') ans += 50;
        if (*i == 'V') ans += 5;
    }
    return ans;
}

void RunRomanToInt() {
    string s = "MCMXCIVI";
    cout << romanToInt(s) << endl;
}