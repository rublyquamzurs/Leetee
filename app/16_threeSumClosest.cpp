//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static int threeSumClosest(vector<int> &nums, int target) {
    std::sort(nums.begin(), nums.end());
    const size_t N = nums.size();
    if (N <= 3) {
        int total = 0;
        std::for_each(nums.begin(), nums.end(), [&total](int x) {total += x; });
        return total;
    }
    if (nums[0] + nums[1] + nums[2] >= target) return nums[0] + nums[1] + nums[2];
    if (nums[N - 3] + nums[N - 2] + nums[N - 1] <= target) return nums[N - 3] + nums[N - 2] + nums[N - 1];
    int extreme = 1e8;
    int ans = 0;
    for (int i = 2; i < N; ++i) {
        if (i < N - 1 && nums[i] == nums[i + 1]) continue;
        int l = 0, r = i - 1;
        while (l < r) {
            int temp = nums[l] + nums[r] + nums[i];
            while (l < r && temp < target) {
                if (target - temp < extreme) {
                    ans = temp;
                    extreme = target - temp;
                }
                temp = nums[++l] + nums[r] + nums[i];
            }
            while (l < r && temp > target) {
                if (temp - target < extreme) {
                    ans = temp;
                    extreme = temp - target;
                }
                temp = nums[l] + nums[--r] + nums[i];
            }
            if (l < r && temp == target) {
                ans = temp;
                break;
            }
        }
        if (ans == target) break;
    }
    return ans;
}

void RunThreeSumClosest() {
    vector<int> vs = {-1,2,1,-4};
    cout << threeSumClosest(vs, 1) << endl;
}