#include "CSolution.h"


void printVector(std::vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

void swap(std::vector<int> &nums, int i, int j)
{
    int t = nums[i];
    nums[i] = nums[j];
    nums[j] = t;
}

static void quickSort(std::vector<int> &nums, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int pivot = nums[right];
    int i = left;
    
    for (int j = left; j < right; j++)
    {
        if (nums[j] < pivot)
        {
            swap(nums, i, j);
            i++;
        }
    }
    swap(nums, i, right);
    quickSort(nums, left, i - 1);
    quickSort(nums, i + 1, right);
}

void RunQuickSort()
{
    std::vector<int> nums = {3, 2, 1, 5, 6, 4, -1, 35, 73, 13, 46, 33, -67};
    quickSort(nums, 0, nums.size() - 1);
    printVector(nums);
}
