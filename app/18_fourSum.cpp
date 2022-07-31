#include "CSolution.h"

using namespace std;


static vector<vector<int>> twoSum(vector<int>& nums, int target, int start) {
    vector<vector<int>> res;
    int lo = start, hi = nums.size() - 1;
    while (lo < hi) {
        int sum = nums[lo] + nums[hi];
        if (sum < target || (lo > start && nums[lo] == nums[lo - 1]))
            ++lo;
        else if (sum > target || (hi < nums.size() - 1 && nums[hi] == nums[hi + 1]))
            --hi;
        else
            res.push_back({ nums[lo++], nums[hi--] });
    }
    return res;
}

static vector<vector<int>> kSum(vector<int>& nums, int target, int start, int k) {
    vector<vector<int>> res;
    if (start == nums.size() || nums[start] * k > target || target > nums.back() * k)
        return res;
    if (k == 2)
        return twoSum(nums, target, start);
    for (int i = start; i < nums.size(); ++i) {
        if (i == start || nums[i - 1] != nums[i]) {
            for (auto& set : kSum(nums, target - nums[i], i + 1, k - 1)) {
                res.push_back({ nums[i] });
                res.back().insert(end(res.back()), begin(set), end(set));
            }
        }
    }
    return res;
}

static vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    return kSum(nums, target, 0, 4);
}

void RunFourSum() {
    vector<int> a = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int> > ans = fourSum(a, target);
    for (auto tar : ans) {
        printf("%d %d %d %d\n", tar[0], tar[1], tar[2], tar[3]);
    }
}