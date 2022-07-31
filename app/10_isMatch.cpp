//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static bool isMatch(string s, string p) {
    if (p.empty())
    {
        return s.empty();
    }
    if (p.size() > 1 && p[1] == '*')
    {
        return isMatch(s, p.substr(2)) || (!s.empty() && (p[0] == s[0] || p[0] == '.')) && isMatch(s.substr(1), p);
    }
    else
    {
        return !s.empty() && (p[0] == s[0] || p[0] == '.') && isMatch(s.substr(1), p.substr(1));
    }
}

void RunIsMatch() {
    string a = "ab";
    string b = ".*";
    cout << (isMatch(a, b) ? "true" : "false") << endl;
}