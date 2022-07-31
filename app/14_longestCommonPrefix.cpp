//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static string longestCommonPrefix(vector<string> & strs) {
    if (strs.empty()) return "";
    if (strs.size() == 1) return strs[0];
    string first_common;
    int p = 0;
    int q = 0;
    while (p < strs[0].length() && q < strs[1].length()) {
        if (strs[0][p] == strs[1][q]) {
            first_common += strs[1][q];
            ++p; ++q;
        }
        else break;
    }
    for (int i = 2; i < strs.size(); ++i) {
        size_t len = first_common.length();
        int j = 0;
        while (j < len && first_common[j] == strs[i][j]) {
            ++j;
        }
        first_common = first_common.substr(0, j);
    }
    return first_common;
}

void RunLongestCommonPrefix() {
    vector<string> vs = {"dog","doaracecar","dofcar"};
    cout << longestCommonPrefix(vs) << endl;
}