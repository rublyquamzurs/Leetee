//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static string convert(string s, int numRows) {
    int length = s.length();
    std::string ans = s;
    if (numRows == 1)
    {
        return ans;
    }
    int arrow = 0;
    for (int line = 0; line < numRows; line++)
    {
        int i = 0;
        int index1 = 0;
        int index2 = 0;
        int temp = -1;
        while (index1 < length && index2 < length)
        {
            index1 = (2 * numRows - 2) * i + line;
            if (index1 != temp && index1 < length)
            {
                ans[arrow] = s[index1];
                temp = index1;
                arrow++;
            }
            index2 = (2 * numRows - 2) * (i + 1) - line;
            if (index2 != temp && index2 < length)
            {
                ans[arrow] = s[index2];
                temp = index2;
                arrow++;
            }
            i++;
        }
    }
    return ans;
}

void RunConvert() {
    string s = "PAYPALISHIRING";
    int n = 4;
    cout << convert(s, n) << endl;
}