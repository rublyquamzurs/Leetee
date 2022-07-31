//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static vector<string> letterCombinations(string digits) {
    if (digits.empty()) {
        std::vector<std::string> ans;
        return ans;
    }
    std::vector<std::vector<char>> unit(8);
    char temp = 'a';
    for (int i = 0; i < 8; ++i) {
        if (i != 5 && i != 7) {
            unit[i] = { temp++, temp++, temp++ };
        }
        else {
            unit[i] = { temp++, temp++, temp++, temp++ };
        }
    }
    std::string::iterator k = digits.begin();
    int sum = 0;
    for (int i = 0; i < digits.length(); ++i) {
        sum += (int)unit[*k - '2'].size();
    }
    std::vector<std::string> ans(1, "");
    while (k != digits.end()) {
        if (*k < '2' || *k > '9') {
            k++;
            continue;
        }
        int c = 0;
        std::vector<std::string> tpv;
        for (char i : unit[*k - '2']) {
            for (auto & an : ans) {
                tpv.push_back(an + i);
            }
        }
        ans = tpv;
        k++;
    }
    return ans;
}

void RunLetterCombinations() {
    string a = "23";
    vector<string> ans = letterCombinations(a);
    for_each(ans.begin(), ans.end(), [](const string& s){ cout << s << ", "; });
}