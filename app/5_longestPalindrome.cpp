//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static string longestPalindrome(string s) {
    std::string ans;
    ans = s[0];
    unsigned int bound;
    unsigned int length = s.length();
    for (unsigned int i = 0; i < length; i++)
    {
        bound = i < length - i ? i : length - i;
        unsigned int j = 0;
        while (j <= bound && s[i - j] == s[i + j + 1])
        {
            j++;
        }
        ans = ans.length() >= s.substr(i - j + 1, 2 * j).length() ? ans : s.substr(i - j + 1, 2 * j);

        unsigned int k = 1;
        while (k <= bound && s[i - k] == s[i + k])
        {
            k++;
        }
        ans = ans.length() >= s.substr(i - k + 1, 2 * k - 1).length() ? ans : s.substr(i - k + 1, 2 * k - 1);
    }
    return ans;
}

void RunLongestPalindrome() {
    string s = "cbbd";
    cout << longestPalindrome(s) << endl;
}