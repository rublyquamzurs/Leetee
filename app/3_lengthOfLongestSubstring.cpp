//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static int lengthOfLongestSubstring(string s) {
    int longest = 0;
    string temp;
    for (char & i : s)
    {
        int idx = temp.find(i);
        if (idx == -1)
        {
            temp += i;
        }
        else
        {
            longest = temp.size() > longest ? temp.size() : longest;
            temp = temp.substr(idx + 1, temp.size());
            temp += i;
        }
        longest = temp.size() > longest ? temp.size() : longest;
    }
    return longest;
}

void RunLengthOfLongestSubstring() {
    string s = "pwwkew";
    cout << lengthOfLongestSubstring(s) << endl;
}