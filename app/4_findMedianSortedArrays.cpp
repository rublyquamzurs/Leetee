//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double ans = 0;
    double length = double(nums1.size()) + double(nums2.size());
    bool ort = int(length / 2) != length / 2;
    vector<int> temp_array(int(length / 2) + 1);
    unsigned int step = 0;
    int t1 = 0, t2 = 0;
    while (step < int(length / 2) + 1)
    {
        if (t1 < nums1.size() && t2 < nums2.size())
        {
            temp_array[step] = nums1[t1] < nums2[t2] ? nums1[t1] : nums2[t2];
            nums1[t1] < nums2[t2] ? t1++ : t2++;
        }
        else
        {
            if (t1 >= nums1.size())
            {
                temp_array[step] = nums2[t2];
                t2++;
            }
            else
            {
                temp_array[step] = nums1[t1];
                t1++;
            }
        }
        step++;
    }
    ans = ort ? double(temp_array[int(length / 2)]) : (double(temp_array[int(length / 2) - 1]) + double(temp_array[int(length / 2)])) / 2;
    return ans;
}

void RunFindMedianSortedArrays() {
    vector<int> p = {1, 2};
    vector<int> q = {3, 4};
    cout << findMedianSortedArrays(p, q) << endl;
}