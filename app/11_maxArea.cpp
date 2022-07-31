//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static int maxArea(vector<int>& height) {
    int volume;
    int length = (int)height.size();
    int i = 0, j = length - 1;
    volume = std::min(height[i], height[j]) * (j - i);
    while (i != j)
    {
        if (height[i] < height[j])
        {
            int mark = height[i];
            while (height[i] <= mark)
            {
                i++;
                if (i == j)
                {
                    break;
                }
            }
            if (i == j)
            {
                break;
            }
            volume = std::min(height[i], height[j]) * (j - i) > volume ? std::min(height[i], height[j]) * (j - i) : volume;
        }
        else
        {
            int mark = height[j];
            while (height[j] <= mark)
            {
                j--;
                if (i == j)
                {
                    break;
                }
            }
            if (i == j)
            {
                break;
            }
            volume = std::min(height[i], height[j]) * (j - i) > volume ? std::min(height[i], height[j]) * (j - i) : volume;
        }
    }
    return volume;
}

void RunMaxArea() {
    vector<int> vt = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(vt) << endl;
}