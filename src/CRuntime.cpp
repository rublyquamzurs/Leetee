//
// Created by Sapphire on 2022/8/1.
//

#include "CRuntime.h"
#include <iostream>
#include <cstdio>

using namespace std;


void CRuntime::append(func node) {
    funcs.push_back(node);
    size++;
}

void CRuntime::run() {
    int no = 1;
    for (auto fun : funcs) {
        printf("---------%d---------\n", no++);
        fun();
        printf("\n");
    }
}

void CRuntime::maintain() {
    append(RunTwoSum);
    append(RunAddTwoNumbers);
    append(RunLengthOfLongestSubstring);
    append(RunFindMedianSortedArrays);
    append(RunLongestPalindrome);
    append(RunConvert);
    append(RunReverse);
    append(RunMyAtoi);
    append(RunIsPalindrome);
    append(RunIsMatch);
    append(RunMaxArea);
    append(RunIntToRoman);
    append(RunRomanToInt);
    append(RunLongestCommonPrefix);
    append(RunThreeSum);
    append(RunThreeSumClosest);
    append(RunLetterCombinations);
    append(RunFourSum);
    append(RunRemoveNthFromEnd);
    append(RunIsValid);
    append(RunMergeTwoLists);
    append(RunQuickSort);
    append(RunRobotWithString);
}