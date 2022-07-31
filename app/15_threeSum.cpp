//
// Created by Sapphire on 2022/9/30.
//

#include "CSolution.h"

using namespace std;


static vector<vector<int>> threeSum(vector<int> & nums) {
    std::vector<std::vector<int>> ans;
    std::sort(nums.begin(), nums.end());
    size_t N = nums.size();
    if (N < 3)return ans;
    for (int i = 2; i < N; ++i) {
        if (i < N - 1 && nums[i] == nums[i + 1]) continue;
        int l = 0, r = i - 1;
        while (l < r) {
            while (l < r && nums[l] + nums[r] + nums[i] < 0) ++l;
            while (l < r && nums[l] + nums[r] + nums[i] > 0) --r;
            if (l < r && nums[l] + nums[r] + nums[i] == 0) {
                ans.push_back({ nums[l], nums[r], nums[i] });
                int lvalue = nums[l], rvalue = nums[r];
                while (l < r && nums[r] == rvalue) --r;
                while (l < r && nums[l] == lvalue) ++l;
            }
        }
    }
    return ans;
}

void RunThreeSum() {
    vector<int> vs = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(vs);
    for (auto vec : ans) {
        for_each(vec.begin(), vec.end(), [](int x){printf("%d,", x);});
        printf("\n");
    }
}