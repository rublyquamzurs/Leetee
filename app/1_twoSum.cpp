//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static vector<int> twoSum(vector<int> &nums, int target) {
    int x, y = 0;
    vector<int> ans(2, 0);
    bool mark = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        x = nums[i];
        y = target - x;
        for(int j = i + 1; j < nums.size(); j++)
        {
            if(y == nums[j])
            {
                ans[0] = i;
                ans[1] = j;
                mark = 1;
                break;
            }
        }
        if (mark == 1)
        {
            break;
        }
    }
    return ans;
}

void RunTwoSum() {
    vector<int> t = {2,7,11,15};
    int ta = 9;
    vector<int> ans = twoSum(t, ta);
    TPrintf(ans);
}