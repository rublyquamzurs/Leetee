//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static string intToRoman(int num) {
    string ans;
    int thousand = num / 1000;
    for (int i = 0; i < thousand; i++) {
        ans.append("M");
    }
    num = num - 1000 * thousand;
    int hundred = num / 100;
    if (hundred == 9)ans.append("CM");
    else {
        if (hundred >= 5) {
            ans.append("D");
            for (int i = 5; i < hundred; i++) {
                ans.append("C");
            }
        }
        if (hundred == 4) {
            ans.append("CD");
        }
        if (hundred < 4) {
            for (int i = 0; i < hundred; i++) {
                ans.append("C");
            }
        }
    }

    num = num - 100 * hundred;
    int ten = num / 10;
    if (ten == 9)ans.append("XC");
    else {
        if (ten >= 5) {
            ans.append("L");
            for (int i = 5; i < ten; i++) {
                ans.append("X");
            }
        }
        if (ten == 4) {
            ans.append("XL");
        }
        if (ten < 4) {
            for (int i = 0; i < ten; i++) {
                ans.append("X");
            }
        }
    }

    num = num - 10 * ten;
    int one = num;
    if (one == 9)ans.append("IX");
    else {
        if (one >= 5) {
            ans.append("V");
            for (int i = 5; i < one; i++) {
                ans.append("I");
            }
        }
        if (one == 4) {
            ans.append("IV");
        }
        if (one < 4) {
            for (int i = 0; i < one; i++) {
                ans.append("I");
            }
        }
    }
    return ans;
}

void RunIntToRoman() {
    int num = 1995;
    cout << intToRoman(num) << endl;
}